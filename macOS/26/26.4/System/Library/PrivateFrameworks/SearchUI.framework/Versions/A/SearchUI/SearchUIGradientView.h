@class NSArray, CAGradientLayer;

@interface SearchUIGradientView : NSView

@property (retain, nonatomic) NSArray *colors;
@property (retain) CAGradientLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isFlipped;

@end
