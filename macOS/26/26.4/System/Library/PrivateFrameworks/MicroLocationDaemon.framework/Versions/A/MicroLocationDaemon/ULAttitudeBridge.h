@class NSString, NSObject;
@protocol OS_dispatch_queue, ULAttitudeDelegate;

@interface ULAttitudeBridge : NSObject <ULAttitudeSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULAttitudeDelegate> delegate;
@property (nonatomic) BOOL updatesRunning;
@property (nonatomic) double updateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailable;

@end
