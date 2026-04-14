@class NSSet;

@interface PPSuggestedEventQuery : PPEventQuery

@property (retain, nonatomic) NSSet *matchingCategories;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
