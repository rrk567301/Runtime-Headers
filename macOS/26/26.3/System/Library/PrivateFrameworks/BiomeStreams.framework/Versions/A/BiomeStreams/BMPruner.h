@class NSString, BMStoreStream;

@interface BMPruner : NSObject {
    BMStoreStream *_storeStream;
    NSString *_remote;
}

+ (id)new;

- (id)init;
- (BOOL)deleteStoreEvent:(id)a0;
- (void).cxx_destruct;
- (void)deleteEventsPassingTest:(id /* block */)a0;
- (void)deleteWithPolicy:(id)a0 eventsPassingTest:(id /* block */)a1;
- (id)initWithStoreStream:(id)a0 remote:(id)a1;

@end
