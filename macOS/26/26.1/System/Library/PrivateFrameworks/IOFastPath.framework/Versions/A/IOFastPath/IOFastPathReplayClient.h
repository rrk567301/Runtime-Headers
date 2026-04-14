@class ReplayQueue;

@interface IOFastPathReplayClient : IOFastPathClientBase {
    ReplayQueue *queue;
}

+ (id)clientWithData:(id)a0 andQueueCapacity:(unsigned int)a1;

- (int)open;
- (int)close;
- (void).cxx_destruct;
- (int)readNextSample:(id)a0;
- (int)readCurrentSample:(id)a0;
- (int)readPreviousSample:(id)a0;
- (id)createSample;
- (int)enqueueSample:(id)a0;
- (id)initWithData:(id)a0 andQueueCapacity:(unsigned int)a1;
- (int)readLatestSample:(id)a0;

@end
