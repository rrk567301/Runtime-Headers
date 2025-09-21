@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse

@property (readonly, nonatomic) NSArray *favoriteLocations;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 favorites:(id)a1;

@end
