@class NSNumber, NSString, IMKUICandidateItemLayout, NSImage, IMKCandidate, NSIndexPath, NSAttributedString;

@interface IMKUICandidate : NSObject <NSCopying> {
    NSNumber *_hasDefinitionValue;
    NSNumber *_hasNoteValue;
    NSImage *_stickerView;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconFrame;
@property (nonatomic) struct CGPoint { double x; double y; } iconPosition;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (readonly, nonatomic) double spaceBetweenIconAndTitle;
@property (nonatomic) long long alignment;
@property (nonatomic) double annotationLeadingMargin;
@property (retain, nonatomic) IMKCandidate *candidate;
@property (readonly, nonatomic) double finalLeadingEdgeForTitle;
@property (readonly, nonatomic) char hasDefinition;
@property (readonly, nonatomic) char hasNote;
@property (nonatomic) char hasCandidateSeparator;
@property (nonatomic) char hasLineSeparator;
@property (nonatomic) char hidden;
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
@property (nonatomic) char selected;
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
- (id)titleAttributes;
- (id)attributedStringWithString:(id)a0 attributes:(id)a1 selected:(char)a2;
- (id)stringAttributes:(id)a0 selected:(char)a1;
- (char)isDummy;
- (struct CGSize { double x0; double x1; })contentSizeForMinimum:(char)a0;
- (void)drawAnnotationInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawBackgroundInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawIconInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawItemInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSeparators:(char)a2;
- (void)drawSelectionInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawSeparatorsInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawTitleInView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawVerticalText:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showAtTop:(char)a2 margin:(double)a3;
- (struct CGSize { double x0; double x1; })extraAnnotationSize;
- (double)finalTrailingEdgeForAnnotation;
- (double)preferredSpacingWithMinimum:(char)a0;
- (void)updateIconSize;
- (double)verticalPositionForStringSize:(struct CGSize { double x0; double x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
