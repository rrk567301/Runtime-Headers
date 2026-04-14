@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *emails;

+ (id)representationFromData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)archivedData;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPhones:(id)a0 emails:(id)a1;
- (BOOL)matchesContactRepresentation:(id)a0;

@end
