@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (id)sharedOnBodyStatusManager;
+ (BOOL)isOnBodyStatusDetectionAvailable;

- (void)disconnect;
- (void)connect;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)setPropertiesWithDictionary:(id)a0;
- (void)stopOnBodyStatusDetectionPrivate;
- (id)init;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)stopOnBodyStatusDetection;
- (void)dealloc;

@end
