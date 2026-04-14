@class NSArray;

@interface PRSLinkTableCardSection : PRSCardSection

@property (readonly, nonatomic) NSArray *links;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithTitle:(id)a0 links:(id)a1;

@end
