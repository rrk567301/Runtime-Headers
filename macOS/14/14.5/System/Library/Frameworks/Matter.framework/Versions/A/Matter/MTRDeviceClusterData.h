@class NSNumber, NSDictionary;

@interface MTRDeviceClusterData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *dataVersion;
@property (retain, nonatomic) NSDictionary *attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataVersion:(id)a0 attributes:(id)a1;

@end
