@class NSImage, NSString;

@interface PRSAppLinkSection : PRSBaseCardSection

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int imageAlign;

- (void).cxx_destruct;
- (id)initWithSFAppLink:(id)a0;

@end
