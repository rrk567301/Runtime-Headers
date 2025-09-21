@class NSString, NSArray;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *minimum;
@property (readonly, nonatomic) NSString *maximum;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) PKDeviceVersionRange *companion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)_matchesDeviceVersion:(id)a0;
- (id)asDictionary;
- (char)isEqualToDeviceVersionRange:(id)a0;

@end
