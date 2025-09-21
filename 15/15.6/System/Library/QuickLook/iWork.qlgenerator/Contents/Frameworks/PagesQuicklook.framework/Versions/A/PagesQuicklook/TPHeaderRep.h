@class NSTimer, TPPaginatedPageInfo;

@interface TPHeaderRep : TSWPHeaderRep

@property (retain, nonatomic) NSTimer *editingDidBeginTimer;
@property (readonly, nonatomic) TPPaginatedPageInfo *pageInfo;
@property (nonatomic) char hideKnobs;

- (void).cxx_destruct;
- (id)pageLayout;
- (char)p_isInDocumentSetup;
- (char)p_isMiddleFooterRep;
- (char)p_isMiddleHeaderRep;
- (char)p_shouldCreateArrowKnobs;

@end
