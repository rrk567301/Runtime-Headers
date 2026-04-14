@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IRTapToRadar : NSObject

@property (retain, nonatomic) NSDate *previousNotificationDate;
@property BOOL pendingNotificationPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)promptForTapToRadarIfAllowed:(id)a0;

@end
