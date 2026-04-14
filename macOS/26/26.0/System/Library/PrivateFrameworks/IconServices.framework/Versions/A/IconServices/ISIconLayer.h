@class NSArray, IFImageBag;

@interface ISIconLayer : NSObject

@property (readonly) IFImageBag *imageBag;
@property (readonly) NSArray *images;
@property BOOL hasLightEffects;

- (id)initWithImages:(id)a0;
- (void).cxx_destruct;

@end
