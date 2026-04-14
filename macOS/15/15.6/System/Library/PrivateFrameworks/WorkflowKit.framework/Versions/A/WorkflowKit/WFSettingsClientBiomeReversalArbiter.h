@class BMStream, BPSPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface WFSettingsClientBiomeReversalArbiter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMStream *stream;
@property (readonly, nonatomic) BPSPublisher *publisher;
@property (readonly, nonatomic) BPSPublisher *reversePublisher;

+ (id)reversePublisherOptions;

- (void).cxx_destruct;
- (void)_pollBiomeForBookmarkForFirstEventAfterBookmark:(id)a0 trial:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)a0;
- (void)getBookmarkForFirstEventAfterBookmark:(id)a0 completionHandler:(id /* block */)a1;
- (void)getReversalStateWithBookmark:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBiomeStream:(id)a0;
- (id)initWithPublisher:(id)a0 reversePublisher:(id)a1;
- (BOOL)lastEventEquals:(id)a0;

@end
