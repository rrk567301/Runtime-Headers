@interface TIDPBiomeNamedEntityTokenRecorder : TIDPRecorder

- (BOOL)report;
- (id)records;
- (id)delegate;
- (id)filterTokenFrequencies:(id)a0 forTokenClass:(unsigned int)a1;
- (id)givenNameRecordingKey;
- (BOOL)shouldSkipWordEntry:(id)a0;
- (id)surnameRecordingKey;

@end
