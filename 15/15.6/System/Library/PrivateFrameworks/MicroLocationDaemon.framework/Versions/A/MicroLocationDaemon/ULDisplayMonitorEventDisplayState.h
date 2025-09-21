@class NSString;

@interface ULDisplayMonitorEventDisplayState : ULEvent

@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) char appInFocusChanged;
@property (nonatomic) char displayOn;
@property (nonatomic) char displayOnChanged;
@property (nonatomic) char screenLocked;
@property (nonatomic) char screenLockedChanged;

- (void).cxx_destruct;

@end
