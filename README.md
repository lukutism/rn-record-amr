# react-native-sound

- Record and play audio in iOS or Android React Native apps converted to amr format.

## Installation

```sh
npm install react-native-sound
```

## Usage
record
```js
import { AudioRecorder, AudioUtils, Sound } from 'react-native-sound';
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
