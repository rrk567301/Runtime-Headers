@class NSData, CUIVectorGlyphManagedPointArray;

@interface CUIVectorGlyphDrawAttachmentDataStore : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, retain, nonatomic) CUIVectorGlyphManagedPointArray *anchors;
@property (readonly, nonatomic) unsigned long long count;

+ (unsigned int)_customDataAtom;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CUIVectorGlyphDrawAttachmentData { float x0; float x1; struct CGPoint { double x0; double x1; } x2; })dataAtIndex:(unsigned long long)a0;
- (id)init;
- (id)createSVGString;
- (void)computeNumEntries:(unsigned long long *)a0 withScanner:(id)a1 fieldDelimiter:(id)a2;
- (id)copyApplyingScaleFactor:(double)a0;
- (void)encodeToSVGNode:(struct CGSVGNode { } *)a0;
- (id)initAdoptingData:(id)a0 anchors:(id)a1;
- (id)initWithSVGNode:(struct CGSVGNode { } *)a0;
- (id)initWithSVGString:(id)a0;

@end
