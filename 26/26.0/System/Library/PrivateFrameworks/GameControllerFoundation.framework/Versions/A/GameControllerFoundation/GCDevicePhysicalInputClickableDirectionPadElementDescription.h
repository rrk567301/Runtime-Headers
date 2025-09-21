@class NSArray;

@interface GCDevicePhysicalInputClickableDirectionPadElementDescription : GCDevicePhysicalInputDirectionPadElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *pressedSources;
@property (nonatomic) unsigned long long eventPressedValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
