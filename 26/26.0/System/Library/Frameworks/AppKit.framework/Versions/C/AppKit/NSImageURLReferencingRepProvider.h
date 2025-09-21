@class NSArray, NSURL, NSString;

@interface NSImageURLReferencingRepProvider : NSObject <NSImageRepProvider, NSCopying>

@property (readonly) NSArray *representations;
@property (readonly, copy) NSURL *url;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) NSString *symbolName;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) BOOL _isIconAppearanceSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)allRepresentationsForImage:(id)a0;

@end
