@class LPLinkMetadata, SLHighlight;

@interface StartPageHighlightViewItemMetadata : NSObject

@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) SLHighlight *highlight;

- (void).cxx_destruct;
- (id)initWithLinkMetadata:(id)a0 highlight:(id)a1;

@end
