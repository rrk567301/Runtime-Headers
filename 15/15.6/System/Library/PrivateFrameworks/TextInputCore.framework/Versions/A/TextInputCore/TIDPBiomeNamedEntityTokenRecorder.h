@interface TIDPBiomeNamedEntityTokenRecorder : TIDPRecorder

- (id)delegate;
- (id)records;
- (char)report;
- (id)filterTokenFrequencies:(id)a0 forTokenClass:(unsigned int)a1;
- (id)givenNameRecordingKey;
- (char)shouldSkipWordEntry:(id)a0;
- (id)surnameRecordingKey;

@end
