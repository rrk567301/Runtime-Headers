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

- (id)filter;
- (void)refresh;
- (void)clearInput;
- (void)setFilter:(id)a0;
- (id)parent;
- (void)setParent:(id)a0;
- (id)result;
- (id)dictionaryRepresentation;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })origin;
- (struct CGSize { double x0; double x1; })originalSize;
- (void)setInputImage:(id)a0;
- (id)description;
- (void)dealloc;
- (id)name;
- (id)initFromDictionary:(id)a0;
- (void)setInputBitmap:(id)a0;
- (id)initWithEffectName:(id)a0;
- (id)inputElement;
- (BOOL)isInUserDomain;
- (id)lastFilterElement;
- (void)setInUserDomain:(BOOL)a0;
- (void)setInputCGImage:(struct CGImage { } *)a0;
- (void)setInputElement:(id)a0;

@end
