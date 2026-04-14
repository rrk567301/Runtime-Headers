@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAArbitrationParticipationController : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_publishFeedbackArbitrationRecordForNearMiss;
- (void)_resetSettingsConnection;
- (void)publishArbitrationParticipationContext:(id)a0;

@end
