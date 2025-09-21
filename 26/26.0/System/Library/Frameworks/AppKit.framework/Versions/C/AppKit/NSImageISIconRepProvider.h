@class NSString, ISIcon, NSArray;

@interface NSImageISIconRepProvider : NSObject <NSImageRepProvider> {
    ISIcon *_icon;
    NSArray *_representations;
}

@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL allowTranslucency;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) NSString *symbolName;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) BOOL _isIconAppearanceSensitive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)placeholderImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)allRepresentationsForImage:(id)a0;
- (id)initWithISIcon:(id)a0 allowingPlaceholder:(BOOL)a1 allowTranslucency:(BOOL)a2;

@end
