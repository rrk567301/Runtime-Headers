@class NSString, NSDictionary;

@interface WBSCRDTPositionSortValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long sortValue;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long changeID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSortValue:(long long)a0 deviceIdentifier:(id)a1 changeID:(long long)a2;
- (id)positionSortValueWithSortValue:(long long)a0;
- (BOOL)isEqualToPositionSortValue:(id)a0;

@end
