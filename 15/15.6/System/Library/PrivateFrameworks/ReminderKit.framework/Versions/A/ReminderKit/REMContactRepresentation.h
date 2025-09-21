@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *emails;

+ (id)representationFromData:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archivedData;
- (id)initWithPhones:(id)a0 emails:(id)a1;
- (char)matchesContactRepresentation:(id)a0;

@end
