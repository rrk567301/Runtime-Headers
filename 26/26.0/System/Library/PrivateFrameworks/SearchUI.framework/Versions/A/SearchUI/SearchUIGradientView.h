@class NSArray, CAGradientLayer;

@interface SearchUIGradientView : NSView

@property (retain, nonatomic) NSArray *colors;
@property (retain) CAGradientLayer *layer;

+ (Class)layerClass;

- (BOOL)isFlipped;
- (id)init;
- (void).cxx_destruct;

@end
