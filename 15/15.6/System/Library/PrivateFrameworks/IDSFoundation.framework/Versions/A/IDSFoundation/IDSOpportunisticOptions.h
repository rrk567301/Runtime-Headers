@class NSDictionary, NSArray, NSDate;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSArray *blocklistedDestinations;
@property (retain, nonatomic) NSDate *expiryDate;
@property (nonatomic) char destinationsMustBeInContacts;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithBlocklistedDestinations:(id)a0 expiryDate:(id)a1 destinationsMustBeInContacts:(char)a2;

@end
