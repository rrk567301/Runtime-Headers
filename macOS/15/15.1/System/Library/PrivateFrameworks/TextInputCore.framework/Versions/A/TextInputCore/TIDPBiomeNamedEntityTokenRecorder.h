@interface TIDPBiomeNamedEntityTokenRecorder : TIDPRecorder

- (id)delegate;
- (BOOL)report;
- (id)records;
- (id)filterTokenFrequencies:(id)a0 forTokenClass:(unsigned int)a1;
- (id)givenNameRecordingKey;
- (BOOL)shouldSkipWordEntry:(id)a0;
- (id)surnameRecordingKey;

@end
