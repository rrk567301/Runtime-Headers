@class BKSHIDEventDeferringSelectionPathIdentifier, NSString, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringSelectionPathIdentifier *selectionPathIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)targetForPID:(int)a0 environment:(id)a1;
+ (id)keyboardFocusTarget;
+ (id)targetForDeferringEnvironment:(id)a0 deferringToken:(id)a1;
+ (id)focusTargetForPID:(int)a0;
+ (id)targetForPID:(int)a0 environment:(id)a1 selectionPath:(id)a2;
+ (id)systemTargetWithDeferringToken:(id)a0;
+ (id)targetForDeferringEnvironment:(id)a0 selectionPath:(id)a1;
+ (id)targetForDeferringEnvironment:(id)a0;
+ (id)systemTarget;
+ (id)keyboardFocusTargetWithDeferringToken:(id)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithEnvironment:(id)a0 token:(id)a1 selectionPath:(id)a2 pid:(int)a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
