@class NSString, VKQuad;

@interface VKCTranslatedParagraph : NSObject

@property (readonly, nonatomic) VKQuad *quad;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) char isPassthrough;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 quad:(id)a1 isPassthrough:(char)a2;

@end
