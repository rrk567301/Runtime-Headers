@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse

@property (readonly, nonatomic) NSArray *favoriteLocations;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 favorites:(id)a1;

@end
