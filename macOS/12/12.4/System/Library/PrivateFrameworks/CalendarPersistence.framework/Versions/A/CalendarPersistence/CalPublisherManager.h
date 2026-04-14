@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CalPublisherManager : NSObject {
    NSMutableDictionary *_publishers;
    double _autoPublishDelay;
    int _autoPublishStatus;
    BOOL _isAutoPublishEnabled;
    NSObject<OS_dispatch_queue> *_publish_queue;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleAutoPublish;
- (void)publishNeeded:(id)a0;
- (void)setAutoPublishEnabled:(BOOL)a0;
- (void)cancelAutoPublish;
- (void)doAutoPublish;
- (BOOL)autoPublishEnabled;
- (void)removeAllPublishers;
- (id)publisherForKey:(id)a0;
- (void)setPublisher:(id)a0 forKey:(id)a1;
- (void)removePublisherForKey:(id)a0;

@end
