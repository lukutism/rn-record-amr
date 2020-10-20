import { NativeModules } from 'react-native';

type SoundType = {
  multiply(a: number, b: number): Promise<number>;
};

const { Sound } = NativeModules;

export default Sound as SoundType;
