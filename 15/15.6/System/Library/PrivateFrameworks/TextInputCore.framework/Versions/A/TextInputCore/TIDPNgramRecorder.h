@interface TIDPNgramRecorder : TIDPNgramRecorderCascading

@property (nonatomic) char shouldDonateNgramSampleRandomly;

+ (void)enumerateNgramsFromSession:(id)a0 n:(unsigned long long)a1 usingBlock:(id /* block */)a2;

- (id)delegate;
- (id)records;
- (char)report;
- (id)recordingKey;
- (id)_normalizedWordEntryStringForWordEntry:(id)a0;
- (id)initWithTypingSession:(id)a0 aligned:(id)a1 n:(unsigned long long)a2 shouldDonateNgramSampleRandomly:(char)a3;
- (id)randomRecords;
- (id)randomRecordsLimitedByCount:(unsigned long long)a0;

@end
