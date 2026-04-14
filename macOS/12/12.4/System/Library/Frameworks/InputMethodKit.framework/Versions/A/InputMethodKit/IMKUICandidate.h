@class NSNumber, NSString, IMKUICandidateItemLayout, IMKCandidate, NSIndexPath, NSAttributedString;

@interface IMKUICandidate : NSObject <NSCopying> {
    NSNumber *_hasDefinitionValue;
    NSNumber *_hasNoteValue;
}

@property (nonatomic) long long alignment;
@property (nonatomic) double annotationLeadingMargin;
@property (retain, nonatomic) IMKCandidate *candidate;
@property (readonly, nonatomic) double finalLeadingEdgeForTitle;
@property (readonly, nonatomic) BOOL hasDefinition;
@property (readonly, nonatomic) BOOL hasNote;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) long long selectionKeyAlignment;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double minimumSpacing;
@property (nonatomic) double spacing;
@property (nonatomic) double thickness;
@property (nonatomic) double rightEdge;
@property (nonatomic) BOOL selected;
@property (nonatomic) double selectionKeyLeadingEdge;
@property (nonatomic) double titleLeadingEdge;
@property (nonatomic) long long truncationType;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (copy, nonatomic) NSAttributedString *annotationAttributedStringValue;
@property (copy, nonatomic) NSAttributedString *titleAttributedStringValue;
@property (retain, nonatomic) IMKUICandidateItemLayout *layout;

+ (id)sharedTextStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (double)length;
- (void).cxx_destruct;
- (BOOL)isDummy;
- (void)drawItemInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)stringAttributes:(id)a0 selected:(BOOL)a1;
- (id)attributedStringWithString:(id)a0 attributes:(id)a1 selected:(BOOL)a2;
- (struct CGSize { double x0; double x1; })contentSizeForMinimum:(BOOL)a0;
- (double)verticalPositionForStringSize:(struct CGSize { double x0; double x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawVerticalText:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showAtTop:(BOOL)a2 margin:(double)a3;
- (double)finalTrailingEdgeForAnnotation;
- (struct CGSize { double x0; double x1; })extraAnnotationSize;
- (void)drawBackgroundInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawSelectionInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawTitleInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawAnnotationInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
