@class NSString, NSImage, NSURL;

@interface PRSDescriptionCardSection : PRSCardSection

@property BOOL title_nowrap;
@property (readonly, nonatomic) int title_weight;
@property (readonly, nonatomic) NSString *description_text;
@property (readonly, nonatomic) int description_size;
@property (readonly, nonatomic) int description_weight;
@property (readonly, nonatomic) BOOL description_expand;
@property (readonly, nonatomic) NSString *description_expand_text;
@property (readonly, nonatomic) int description_max_lines;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) int imageAlign;
@property (readonly, nonatomic) NSImage *attribution_glyph;
@property (readonly, nonatomic) NSString *attribution_text;
@property (readonly, nonatomic) NSURL *attribution_url;
@property (nonatomic) int text_align;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
