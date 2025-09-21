@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    NSMutableSet *_timeCoercibleSilos;
    int _missBehavior;
    double _currentGlobalLatchedAbsoluteTimestamp;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
}

+ (id)sharedInstance;
+ (void)rereadConfiguration:(id)a0;
+ (void)initialize;

- (BOOL)isServiceRunning:(id)a0;
- (void)amendServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)dealloc;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)a0;
- (BOOL)isTimeCoercionEnabled;
- (id)proxyForService:(id)a0;
- (id)init;
- (BOOL)isServiceEnabled:(id)a0;
- (BOOL)ensureServiceIsRunning:(id)a0;
- (id)setRecordingTriggerMap:(id)a0 outputPathBase:(id)a1;
- (id)getServiceWithName:(id)a0;
- (void)setServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)enableTimeCoercion;
- (int)missBehavior;
- (id)proxyForService:(id)a0 forClient:(id)a1;
- (void)retireServiceWithName:(id)a0;
- (void)intendToSyncServiceWithName:(id)a0;
- (void).cxx_destruct;

@end
