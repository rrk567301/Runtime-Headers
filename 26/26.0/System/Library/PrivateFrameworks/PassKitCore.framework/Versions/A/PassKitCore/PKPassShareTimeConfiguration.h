@class NSArray, NSDate;

@interface PKPassShareTimeConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long support;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSArray *schedules;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)intersect:(id)a0;
- (BOOL)isEqualToPassShareTimeConfiguration:(id)a0;

@end
