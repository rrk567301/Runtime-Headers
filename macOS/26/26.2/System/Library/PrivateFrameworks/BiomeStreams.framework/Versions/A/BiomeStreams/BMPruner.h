@class NSString, BMStoreStream;

@interface BMPruner : NSObject {
    BMStoreStream *_storeStream;
    NSString *_remote;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (BOOL)deleteStoreEvent:(id)a0;
- (void)deleteEventsPassingTest:(id /* block */)a0;
- (void)deleteWithPolicy:(id)a0 eventsPassingTest:(id /* block */)a1;
- (id)initWithStoreStream:(id)a0 remote:(id)a1;

@end
