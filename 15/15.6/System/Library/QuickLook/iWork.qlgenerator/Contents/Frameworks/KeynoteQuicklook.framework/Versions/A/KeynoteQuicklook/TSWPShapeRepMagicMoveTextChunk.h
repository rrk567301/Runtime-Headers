@class NSString, NSMutableIndexSet, TSWPShapeRep;

@interface TSWPShapeRepMagicMoveTextChunk : NSObject

@property (nonatomic) TSWPShapeRep *rep;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) char hasListLabel;
@property (retain, nonatomic) NSMutableIndexSet *unhandledIndexSet;
@property (nonatomic) long long stageIndex;
@property (nonatomic) char isVisible;
@property (nonatomic) double opacityFromRenderer;
@property (nonatomic) char shouldTreatAsSingleCharacter;
@property (nonatomic) char hasBackgroundShape;

- (void)dealloc;
- (id)description;
- (id)init;

@end
