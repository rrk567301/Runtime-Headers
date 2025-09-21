@class NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithEnvironment:(id)a0 display:(id)a1 token:(id)a2;

@end
