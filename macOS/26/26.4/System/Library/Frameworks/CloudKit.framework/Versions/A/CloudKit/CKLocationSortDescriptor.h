@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CLLocation *relativeLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)initWithKey:(id)a0 relativeLocation:(id)a1;

@end
