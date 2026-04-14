@class NSArray;

@interface MADVITextLookupResult : MADResult

@property (readonly, nonatomic) NSArray *searchSections;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSearchSections:(id)a0;

@end
