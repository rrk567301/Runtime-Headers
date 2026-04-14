@interface CHDBaseChannel : AWDHippoChannel

+ (void)initialize;
+ (id)featureName;
+ (id)featureDescription;

- (void)terminate;
- (void)processData:(id)a0;
- (id)initWithLink:(id)a0 withPort:(unsigned short)a1;

@end
