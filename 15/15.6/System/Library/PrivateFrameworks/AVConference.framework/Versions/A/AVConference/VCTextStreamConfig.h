@interface VCTextStreamConfig : VCMediaStreamConfig

@property (readonly, nonatomic, getter=isRedEnabled) char redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (nonatomic) float txIntervalMin;

- (char)setupCodecWithClientDictionary:(id)a0;
- (id)initWithClientDictionary:(id)a0;

@end
