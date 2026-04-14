@class NSArray, CAGradientLayer;

@interface SearchUIGradientView : NSView

@property (retain, nonatomic) NSArray *colors;
@property (retain) CAGradientLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)init;

@end
