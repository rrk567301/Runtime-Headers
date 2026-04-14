@interface _NSStandardSliderAccessoryBehavior : NSSliderAccessoryBehavior

@property (readonly) long long behavior;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)repeatsOnLongPressForAccessory:(id)a0;
- (BOOL)_hasStepBehaviorInContainer:(id)a0;
- (void)handleAction:(id)a0;
- (id)initWithStandardBehavior:(long long)a0;

@end
