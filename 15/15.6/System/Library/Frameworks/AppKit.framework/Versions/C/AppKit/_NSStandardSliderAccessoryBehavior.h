@interface _NSStandardSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly) long long behavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)repeatsOnLongPressForAccessory:(id)a0;
- (char)_hasStepBehaviorInContainer:(id)a0;
- (void)handleAction:(id)a0;
- (id)initWithStandardBehavior:(long long)a0;

@end
