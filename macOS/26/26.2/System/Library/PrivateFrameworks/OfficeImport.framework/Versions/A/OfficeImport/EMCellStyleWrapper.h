@class EDStyle, OITSUColor;

@interface EMCellStyleWrapper : NSObject {
    OITSUColor *_fillColor;
}

@property (retain) EDStyle *edStyle;
@property (readonly) OITSUColor *fillColor;
@property (readonly) BOOL isVisible;

+ (id)fillColorForPatternFill:(id)a0;

- (id)initWithStyle:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
