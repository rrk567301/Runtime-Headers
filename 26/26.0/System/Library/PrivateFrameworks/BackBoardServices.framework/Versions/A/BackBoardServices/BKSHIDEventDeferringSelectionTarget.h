@class NSString, BKSHIDEventDisplay, BKSHIDEventDeferringTarget, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringSelectionTarget : NSObject <NSSecureCoding, BSDescriptionStreaming, NSCopying, NSMutableCopying> {
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringTarget *_target;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringTarget *target;
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
