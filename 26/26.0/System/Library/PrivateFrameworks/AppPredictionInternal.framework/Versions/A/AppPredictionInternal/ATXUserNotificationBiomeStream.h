@class NSString, BMStoreStream, BMSource;

@interface ATXUserNotificationBiomeStream : NSObject <BMStream, BMSourceStream> {
    BMStoreStream *_inner;
    BMSource *_source;
}

@property (readonly, nonatomic) NSString *identifier;

- (id)initWithStoreConfig:(id)a0;
- (void)sendEvent:(id)a0;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherFromStartTime:(id)a0 endTime:(id)a1 maxEvents:(unsigned long long)a2 lastN:(unsigned long long)a3 reversed:(BOOL)a4;
- (id)init;
- (void)sendEvent:(long long)a0 notification:(id)a1 deliveryReason:(unsigned long long)a2 interactionUI:(unsigned long long)a3;
- (void)deleteAllEvents;
- (void).cxx_destruct;
- (id)source;

@end
