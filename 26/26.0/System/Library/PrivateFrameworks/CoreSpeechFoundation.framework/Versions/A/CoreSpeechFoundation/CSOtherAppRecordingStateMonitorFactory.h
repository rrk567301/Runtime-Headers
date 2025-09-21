@interface CSOtherAppRecordingStateMonitorFactory : NSObject

+ (id)otherAppRecordingStateMonitor;
+ (BOOL)_isSystemStatusSupported;
+ (id)_otherAppRecordingStateMonitor;
+ (id)_otherAppRecordingStateMonitorImpMicAttribution;

@end
