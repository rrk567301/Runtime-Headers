@class NSString;

@interface PKDeviceVersion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *generation;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) PKDeviceVersion *companion;

+ (id)fromCurrentDeviceVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDeviceVersion:(id)a0;

@end
