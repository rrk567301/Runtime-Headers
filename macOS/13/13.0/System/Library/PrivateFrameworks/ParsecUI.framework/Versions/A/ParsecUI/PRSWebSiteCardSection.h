@class NSImage;

@interface PRSWebSiteCardSection : PRSTitleCardSection

@property (nonatomic) BOOL title_nowrap;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) int image_size;
@property (copy, nonatomic) id /* block */ clickAction;

+ (id)safariIcon;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
