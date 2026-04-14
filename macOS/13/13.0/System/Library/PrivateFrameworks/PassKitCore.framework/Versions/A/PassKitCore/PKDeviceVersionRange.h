@class NSString, NSArray;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *minimum;
@property (readonly, nonatomic) NSString *maximum;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) PKDeviceVersionRange *companion;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (BOOL)isEqualToDeviceVersionRange:(id)a0;
- (BOOL)_matchesDeviceVersion:(id)a0;

@end
