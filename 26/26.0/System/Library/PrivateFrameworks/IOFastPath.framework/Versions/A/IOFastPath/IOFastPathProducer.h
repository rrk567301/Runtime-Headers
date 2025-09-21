@interface IOFastPathProducer : IOFastPathServiceClient

+ (id)clientWithService:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (id)createSample;
- (int)enqueueSample:(id)a0;

@end
