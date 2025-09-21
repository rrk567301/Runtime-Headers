@class NSArray;

@interface GCDevicePhysicalInputSwitchElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
@property (nonatomic, getter=isSequential) char sequential;
@property (nonatomic) char canWrap;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } positionRange;
@property (nonatomic) unsigned long long eventPositionField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
