@class BKSHIDEventDeferringSelectionPathIdentifier, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventPolicyObservation : BKSHIDEventPolicyObservation

@property (nonatomic) int pid;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDeferringSelectionPathIdentifier *selectionPath;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) long long policyStatus;
@property (nonatomic, getter=isFinalStringToken) BOOL finalStringToken;

- (void)setEnvironment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplay:(id)a0;
- (void)setPid:(int)a0;
- (void)setToken:(id)a0;
- (void)setFinalStringToken:(BOOL)a0;
- (void)setPolicyStatus:(long long)a0;
- (void)setSelectionPath:(id)a0;

@end
