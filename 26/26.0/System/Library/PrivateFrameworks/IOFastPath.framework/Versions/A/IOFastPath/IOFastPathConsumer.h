@interface IOFastPathConsumer : IOFastPathServiceClient {
    unsigned long long generation;
}

+ (id)clientWithService:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (int)readNextSample:(id)a0;
- (int)readCurrentSample:(id)a0;
- (int)readPreviousSample:(id)a0;
- (id)createSample;
- (int)readLatestSample:(id)a0;
- (int)readSample:(id)a0 withReader:(void /* function */ *)a1;

@end
