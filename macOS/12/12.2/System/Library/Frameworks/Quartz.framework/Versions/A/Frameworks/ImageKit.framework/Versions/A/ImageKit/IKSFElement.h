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

+ (id)elementWithEffectName:(id)a0;
+ (id)elementFromDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (id)name;
- (id)filter;
- (id)result;
- (void)setFilter:(id)a0;
- (id)parent;
- (id)dictionaryRepresentation;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })originalSize;
- (void)refresh;
- (void)setInputImage:(id)a0;
- (void)setParent:(id)a0;
- (struct CGPoint { double x0; double x1; })origin;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)initFromDictionary:(id)a0;
- (id)initWithEffectName:(id)a0;
- (void)setInUserDomain:(BOOL)a0;
- (void)clearInput;
- (BOOL)isInUserDomain;
- (id)lastFilterElement;
- (void)setInputElement:(id)a0;
- (id)inputElement;
- (void)setInputBitmap:(id)a0;
- (void)setInputCGImage:(struct CGImage { } *)a0;

@end
