@class NSArray, NSCollectionViewLayoutAttributes;

@interface IMGroupAcknowledgementPollSectionLayoutAttributes : NSObject

@property (readonly) NSArray *avatarCellLayoutAttributes;
@property (retain) NSArray *avatarLabelLayoutAttributes;
@property (retain) NSCollectionViewLayoutAttributes *footerLayoutAttributes;
@property (getter=isExpanded) char expanded;
@property char shouldHideAll;
@property (nonatomic) double distanceFromLeadingEdge;

+ (id)testSectionFooterView;

- (void).cxx_destruct;
- (void)_calculateLayoutAttributes;
- (void)_translateXBy:(double)a0;
- (id)initForSection:(unsigned long long)a0 cellCount:(unsigned long long)a1 expanded:(char)a2 shouldHideAll:(char)a3;

@end
