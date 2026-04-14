@class NSArray;

@interface MADVITextLookupResult : MADResult

@property (readonly, nonatomic) NSArray *searchSections;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSearchSections:(id)a0;

@end
