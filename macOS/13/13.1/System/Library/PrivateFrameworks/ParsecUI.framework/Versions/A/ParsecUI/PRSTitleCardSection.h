@class NSString;

@interface PRSTitleCardSection : PRSCardSection

@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL useSmallerFont;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 useSmallerFont:(BOOL)a2;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
