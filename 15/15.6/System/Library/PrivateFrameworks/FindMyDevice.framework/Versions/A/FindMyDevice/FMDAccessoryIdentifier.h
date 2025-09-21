@class NSString;

@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isValid) char valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (id)initWithAddress:(id)a0;
- (id)computeAccessoryIdentifierWithAddress:(id)a0;
- (char)encodeWithFMDCoder:(id)a0 error:(id *)a1;
- (id)initWithDeviceVendor:(id)a0 deviceProductId:(id)a1;
- (id)initWithFMDCoder:(id)a0 error:(id *)a1;

@end
