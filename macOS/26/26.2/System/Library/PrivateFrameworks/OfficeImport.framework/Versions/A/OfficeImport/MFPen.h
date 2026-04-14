@class OITSUColor;

@interface MFPen : NSObject <MFObject> {
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)pen;
+ (id)penWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;

- (void).cxx_destruct;
- (id)init;
- (int)getStyle;
- (id)getColor;
- (int)getWidth;
- (id)initWithStyle:(int)a0 width:(int)a1 colour:(id)a2 styleArray:(double *)a3;
- (int)selectInto:(id)a0;

@end
