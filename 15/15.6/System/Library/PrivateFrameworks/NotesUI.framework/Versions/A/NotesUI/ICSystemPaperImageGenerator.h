@interface ICSystemPaperImageGenerator : NSObject

@property (nonatomic, getter=isSixChannelBlendingEnabled) char sixChannelBlendingEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBounds;
@property (readonly, nonatomic) char hasDeepLink;

+ (id)imageGeneratorWithPaperAttachment:(id)a0;
+ (id)imageGeneratorWithPaperAttachment:(id)a0 useActivePaper:(char)a1;

- (id)init;
- (id)initWithPaperAttachment:(id)a0;
- (char)drawPaperInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (id)imageWithFullResolution:(char)a0 inverted:(char)a1;
- (id)initWithPaperAttachment:(id)a0 useActivePaper:(char)a1;
- (char)validatePaperBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
