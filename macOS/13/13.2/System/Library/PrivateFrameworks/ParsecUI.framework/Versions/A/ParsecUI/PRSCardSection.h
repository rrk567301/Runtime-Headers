@class NSString;

@interface PRSCardSection : PRSBaseCardSection

@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 andSFSearchResult:(id)a1 cardSection:(id)a2;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
