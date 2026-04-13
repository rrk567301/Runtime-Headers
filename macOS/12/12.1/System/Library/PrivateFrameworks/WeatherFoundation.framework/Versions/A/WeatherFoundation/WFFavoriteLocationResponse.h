@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse

@property (readonly, nonatomic) NSArray *favoriteLocations;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 favorites:(id)a1;

@end
