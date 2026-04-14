@class NSArray, NSString;

@interface PRSAppLinkCardSection : PRSCardSection

@property (readonly, nonatomic) NSArray *appLinks;
@property (retain, nonatomic) NSString *appTitle;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 appLinks:(id)a1;

@end
