@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_data> *_streamData;
    char _isClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)a0;
- (void)_close;
- (id)serializedData;

@end
