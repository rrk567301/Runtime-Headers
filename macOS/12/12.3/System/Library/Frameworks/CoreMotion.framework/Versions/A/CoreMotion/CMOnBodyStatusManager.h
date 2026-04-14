@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (BOOL)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (void)connect;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)stopOnBodyStatusDetection;
- (void)setPropertiesWithDictionary:(id)a0;

@end
