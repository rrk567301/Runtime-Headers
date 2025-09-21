@interface TIDPNgramRecorderCascading : TIDPRecorder

@property (nonatomic) unsigned long long n;

- (char)report;
- (id)initWithTypingSession:(id)a0 aligned:(id)a1 n:(unsigned long long)a2;

@end
