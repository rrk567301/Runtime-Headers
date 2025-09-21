@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator

- (char)validateAudioOutputSettings:(id)a0 reason:(id *)a1;
- (char)validateVideoOutputSettings:(id)a0 reason:(id *)a1;

@end
