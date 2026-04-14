@class NSURL;

@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor

@property (retain) NSURL *_url;
@property (readonly) BOOL placeholder;

+ (id)descriptorFromGraphicIconConfiguration:(id)a0;
+ (id)descriptorFromGraphicSymbolRecipe:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
