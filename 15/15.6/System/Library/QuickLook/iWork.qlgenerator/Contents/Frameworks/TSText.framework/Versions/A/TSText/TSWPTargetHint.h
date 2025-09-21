@class NSString;

@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameBounds;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } anchoredRange;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) unsigned long long lineFragmentCount;
@property (nonatomic) char usedParagraphHeights;
@property (nonatomic) char endOfLayout;
@property (nonatomic) char lastLineIsEmptyAndHasListLabel;
@property (nonatomic) char textIsVertical;
@property (nonatomic) char terminatedByBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)trimToCharIndex:(unsigned long long)a0 inTarget:(id)a1 removeFootnoteReferenceCount:(unsigned long long)a2 removeAutoNumberFootnoteCount:(unsigned long long)a3;

@end
