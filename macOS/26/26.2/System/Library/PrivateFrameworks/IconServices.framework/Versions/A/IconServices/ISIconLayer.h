@class NSArray, IFImageBag;

@interface ISIconLayer : NSObject

@property (readonly) IFImageBag *imageBag;
@property (readonly) NSArray *images;
@property BOOL hasLightEffects;

- (void).cxx_destruct;
- (id)initWithImages:(id)a0;

@end
