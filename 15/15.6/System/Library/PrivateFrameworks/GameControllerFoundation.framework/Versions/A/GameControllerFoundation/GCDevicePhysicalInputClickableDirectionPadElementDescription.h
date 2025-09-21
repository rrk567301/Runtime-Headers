@class NSArray;

@interface GCDevicePhysicalInputClickableDirectionPadElementDescription : GCDevicePhysicalInputDirectionPadElementDescription <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *pressedSources;
@property (nonatomic) unsigned long long eventPressedValueField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
