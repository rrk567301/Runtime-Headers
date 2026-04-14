@class NSArray, CRNormalizedQuad, NSString, NSLocale;

@interface CHReflowableTextLine : NSObject <CRDirectionalRegion>

@property (nonatomic) BOOL hasStartingLineBreak;
@property (nonatomic) BOOL hasEndingLineBreak;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } principalLines;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double headIndent;
@property (readonly, nonatomic) double leading;
@property (readonly, nonatomic) unsigned long long alignmentType;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_normalizedLocaleForCRLineWrapper:(id)a0;
+ (id)reflowableLines:(id)a0 withLineWrapper:(id)a1;
+ (BOOL)supportsReflowForLocale:(id)a0;
+ (BOOL)useRightToLeftReflow:(id)a0;

@end
