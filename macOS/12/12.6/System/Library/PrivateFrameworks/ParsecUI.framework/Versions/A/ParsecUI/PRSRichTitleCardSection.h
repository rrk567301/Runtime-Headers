@class NSArray, NSString, NSImage, PRSAuxiliaryInfo, PRSActionButton;

@interface PRSRichTitleCardSection : PRSTitleCardSection

@property (readonly, nonatomic) unsigned long long title_weight;
@property (readonly, nonatomic) BOOL thumbnail_crop_circle;
@property (readonly, nonatomic) int title_align;
@property (readonly, nonatomic) NSArray *buy_buttons;
@property (readonly, nonatomic) NSString *description_text;
@property (readonly, nonatomic) NSArray *more_glyphs;
@property (readonly, nonatomic) NSImage *rt_glyph;
@property (readonly, nonatomic) NSString *rt_text;
@property (readonly, nonatomic) BOOL rt_newline;
@property (readonly, nonatomic) BOOL hide_vertical_divider;
@property (readonly, nonatomic) float rating;
@property (readonly, nonatomic) NSString *rating_text;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImage *image_overlay;
@property (readonly, nonatomic) PRSAuxiliaryInfo *auxiliary_info;
@property (readonly, nonatomic) PRSActionButton *action_button;
@property (readonly, nonatomic) int action_button_align;
@property (readonly, nonatomic) BOOL isActionButtonAligned;
@property (readonly, nonatomic) double round_corner_pt;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 title_weight:(unsigned long long)a3 title_align:(long long)a4 glyphs:(id)a5 rt_glyph:(id)a6 rt_text:(id)a7 rt_newline:(BOOL)a8 rating:(float)a9 text:(id)a10 image:(id)a11 auxiliary_info:(id)a12 action_button:(id)a13 action_button_align:(int)a14 buy_buttons:(id)a15;

@end
