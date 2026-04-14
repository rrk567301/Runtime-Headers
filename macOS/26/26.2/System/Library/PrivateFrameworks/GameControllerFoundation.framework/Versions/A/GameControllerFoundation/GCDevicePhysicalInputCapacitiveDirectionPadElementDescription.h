@class NSArray;

@interface GCDevicePhysicalInputCapacitiveDirectionPadElementDescription : GCDevicePhysicalInputClickableDirectionPadElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *touchedSources;
@property (nonatomic) unsigned long long eventTouchedValueField;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
