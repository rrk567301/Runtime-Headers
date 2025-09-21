@interface ULDisplayMonitorEventDisplayState_OSX : ULEvent

@property (nonatomic) char screenOn;
@property (nonatomic) char screenOnChanged;
@property (nonatomic) char clamshellMode;
@property (nonatomic) char clamshellModeChanged;
@property (nonatomic) char screenLocked;
@property (nonatomic) char screenLockedChanged;

@end
