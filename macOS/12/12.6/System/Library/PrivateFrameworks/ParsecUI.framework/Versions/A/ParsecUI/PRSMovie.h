@class SFPunchout, NSString, NSImage, NSArray;

@interface PRSMovie : NSObject

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *subtitle_custom_line_breaking;
@property (nonatomic) long long subtitle_maxlines;
@property (retain, nonatomic) NSImage *rt_glyph;
@property (retain, nonatomic) NSString *rt_text;
@property (retain, nonatomic) NSArray *more_glyphs;
@property (retain, nonatomic) NSArray *buyOptions;
@property (retain, nonatomic) SFPunchout *punchout;

- (void).cxx_destruct;
- (id)initWithSFMediaItem:(id)a0;

@end
