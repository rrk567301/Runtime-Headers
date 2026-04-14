@class NSString, CMOdometryManager, NSObject;
@protocol OS_dispatch_queue, ULOdometryDelegate;

@interface ULOdometryBridge : NSObject <ULOdometrySource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULOdometryDelegate> delegate;
@property (retain, nonatomic) CMOdometryManager *odometryManager;
@property (nonatomic) BOOL backgroudUpdatesRunning;
@property (readonly, nonatomic) long long odometrySourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBackgroundAvailable;

@end
