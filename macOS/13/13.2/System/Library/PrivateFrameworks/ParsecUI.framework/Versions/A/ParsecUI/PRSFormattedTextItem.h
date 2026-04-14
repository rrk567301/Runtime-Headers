@class NSString, NSImage, SFColor;

@interface PRSFormattedTextItem : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL bold;
@property (readonly, nonatomic) NSString *formatted_text_delimiter;
@property (retain, nonatomic) SFColor *text_color;

- (void).cxx_destruct;
- (id)initWithSFFormattedText:(id)a0;

@end
