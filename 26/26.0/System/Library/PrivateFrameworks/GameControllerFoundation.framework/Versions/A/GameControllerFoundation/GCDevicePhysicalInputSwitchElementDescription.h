@class NSArray;

@interface GCDevicePhysicalInputSwitchElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
@property (nonatomic, getter=isSequential) BOOL sequential;
@property (nonatomic) BOOL canWrap;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } positionRange;
@property (nonatomic) unsigned long long eventPositionField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
