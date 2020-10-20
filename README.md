Marn-record-amrgithub.com/dermvpure/react-native-audios

# rn-record-amr

- Record and play audio in iOS or Android React Native apps converted to amr format.

## Usage
recordrn-record-amr
```js
import { AudioRecorder, AudioUtils, Sound } from 'rn-record-amr';
let audioPath = AudioUtils.DocumentDirectoryPath + '/test.amr',

AudioRecorder.prepareRecordingAtPath(audioPath, {
	SampleRate: 22050,
	Channels: 1,
	AudioQuality: "Low",
	AudioEncoding: "amr",
	AudioEncodingBitRate: 32000
});
```
playing audio
```js
var sound = new Sound(this.state.audioPath, '', (error) => {
	if (error) {
		console.log('failed to load the sound', error);
	}
});

sound.play((success) => {
	if (success) {
		console.log('successfully finished playing');
	} else {
		console.log('playback failed due to audio decoding errors');
	}
});
```
## Thanks
- react-native-audio
- react-native-sound
