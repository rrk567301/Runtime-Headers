@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    char fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (char)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)dealloc;
- (id)init;
- (void)disconnect;
- (void)connect;
- (void)setPropertiesWithDictionary:(id)a0;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)stopOnBodyStatusDetection;
- (void)stopOnBodyStatusDetectionPrivate;

@end
