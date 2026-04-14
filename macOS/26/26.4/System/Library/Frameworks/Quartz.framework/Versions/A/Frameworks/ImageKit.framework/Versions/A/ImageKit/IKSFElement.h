@class NSString, CIFilter;

@interface IKSFElement : NSObject {
    CIFilter *_filter;
    NSString *_filterName;
    IKSFElement *_parent;
    IKSFElement *_inputElement;
    struct CGPoint { double x; double y; } _origin;
    struct CGSize { double width; double height; } _originalSize;
    BOOL _inUserDomain;
}

+ (id)elementFromDictionary:(id)a0;
+ (id)elementWithEffectName:(id)a0;

- (void)clearInput;
- (struct CGPoint { double x0; double x1; })origin;
- (id)name;
- (id)parent;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)refresh;
- (void)setParent:(id)a0;
- (void)setFilter:(id)a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)dictionaryRepresentation;
- (id)initFromDictionary:(id)a0;
- (id)filter;
- (id)description;
- (struct CGSize { double x0; double x1; })originalSize;
- (void)setInputImage:(id)a0;
- (void)dealloc;
- (id)result;
- (void)setInputBitmap:(id)a0;
- (id)initWithEffectName:(id)a0;
- (id)inputElement;
- (BOOL)isInUserDomain;
- (id)lastFilterElement;
- (void)setInUserDomain:(BOOL)a0;
- (void)setInputCGImage:(struct CGImage { } *)a0;
- (void)setInputElement:(id)a0;

@end
