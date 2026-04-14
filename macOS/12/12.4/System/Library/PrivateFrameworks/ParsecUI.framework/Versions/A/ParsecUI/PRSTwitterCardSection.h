@class NSString, NSImage, NSArray;

@interface PRSTwitterCardSection : PRSCardSection {
    BOOL _isMultiTweet;
}

@property BOOL isMultiTweet;
@property (readonly, nonatomic) BOOL title_nowrap;
@property (readonly, nonatomic) long long title_maxlines;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSImage *thumbnail;
@property (readonly, nonatomic) NSString *date;
@property (readonly, nonatomic) NSArray *formattedText;
@property (readonly, nonatomic) int image_align;
@property (readonly, nonatomic) NSString *footnote;
@property (readonly, nonatomic) NSImage *title_glyph;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) double round_corner_pt;
@property (readonly, nonatomic) double inline_round_corner_pt;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 glyph:(id)a1 subtitle:(id)a2 image:(id)a3 title_nowrap:(BOOL)a4 title_maxlines:(long long)a5 thumbnail:(id)a6 date:(id)a7 formattedText:(id)a8 image_align:(int)a9 footnote:(id)a10;

@end
