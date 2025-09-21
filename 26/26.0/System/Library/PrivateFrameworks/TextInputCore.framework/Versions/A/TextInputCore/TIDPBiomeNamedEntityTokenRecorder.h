@interface TIDPBiomeNamedEntityTokenRecorder : TIDPRecorder

- (id)records;
- (BOOL)report;
- (id)delegate;
- (id)filterTokenFrequencies:(id)a0 forTokenClass:(unsigned int)a1;
- (id)givenNameRecordingKey;
- (BOOL)shouldSkipWordEntry:(id)a0;
- (id)surnameRecordingKey;

@end
