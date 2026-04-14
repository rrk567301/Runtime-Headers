@class NSNumber, MTRDeviceType;

@interface MTRDeviceTypeRevision : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *deviceTypeID;
@property (readonly, copy, nonatomic) NSNumber *deviceTypeRevision;
@property (readonly, copy, nonatomic) MTRDeviceType *typeInformation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceTypeID:(id)a0 revision:(id)a1;
- (id)initWithDeviceTypeStruct:(id)a0;

@end
