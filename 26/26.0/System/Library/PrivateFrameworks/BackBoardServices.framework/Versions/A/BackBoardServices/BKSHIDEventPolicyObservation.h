@class BKSHIDEventDeferringSelectionPathIdentifier, NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventPolicyObservation : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreaming> {
    int _pid;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDeferringSelectionPathIdentifier *_selectionPath;
    BKSHIDEventDeferringToken *_token;
    long long _policyStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) BKSHIDEventDeferringSelectionPathIdentifier *selectionPath;
@property (readonly, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly, nonatomic) long long policyStatus;
@property (readonly, nonatomic, getter=isFinalStringToken) BOOL finalStringToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
