@class NSMutableDictionary;

@interface VMUAnalyticsEvent : NSObject {
    BOOL _eventSent;
    unsigned long long _startTime;
    unsigned long long _graphNodeCount;
    unsigned long long _graphEdgeCount;
    unsigned long long _graphClassCount;
    long long _respawnReason;
    long long _targetType;
    long long _targetMSLStatus;
    unsigned int _targetPlatform;
    BOOL _targetIsDebuggable;
    BOOL _targetIsGetTaskAllow;
    BOOL _targetIsTranslated;
    BOOL _targetIsApp;
    NSMutableDictionary *_enabledOptions;
}

@property (nonatomic) int exitStatus;

- (void)send;
- (void).cxx_destruct;
- (id)init;
- (void)addEnabledOption:(id)a0 value:(id)a1;
- (void)populateInfoFromGraph:(id)a0;
- (void)populateInfoFromTask:(id)a0;

@end
