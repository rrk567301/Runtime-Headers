@class NSString;

@interface CSOtherAppRecordingStateMonitorASMac : NSObject <CSOtherAppRecordingStateMonitorProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isOtherNonEligibleAppRecording;

@end
