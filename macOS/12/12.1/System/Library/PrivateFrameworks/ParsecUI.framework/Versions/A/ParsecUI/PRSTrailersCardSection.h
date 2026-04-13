@class NSArray;

@interface PRSTrailersCardSection : PRSCardSection

@property (readonly, nonatomic) NSArray *trailers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 trailers:(id)a1;

@end
