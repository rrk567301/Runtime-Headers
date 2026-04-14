@class NSString, ECPriceFormattingThresholds, NSMutableArray;

@interface _ECParsedHTMLNode : NSObject <ECMessageBodyNode, ECMessageBodyTreeNode, ECMessageBodyConsumableInnerTextNode> {
    NSMutableArray *_childNodes;
}

@property (nonatomic) unsigned long long depth;
@property (nonatomic) ECPriceFormattingThresholds *priceFormattingThresholds;
@property (weak, nonatomic) _ECParsedHTMLNode *parentNode;
@property (weak, nonatomic) _ECParsedHTMLNode *nextSibling;
@property (weak, nonatomic) _ECParsedHTMLNode *rootNode;
@property (readonly, nonatomic) BOOL hasChildNodes;
@property (readonly, nonatomic) _ECParsedHTMLNode *firstChild;
@property (readonly, nonatomic) _ECParsedHTMLNode *lastChild;
@property (readonly, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSString *htmlString;
@property (nonatomic) unsigned long long startLocation;
@property (nonatomic) unsigned long long endLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recursiveDescription;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (void)dealloc;
- (void)appendChild:(id)a0;
- (void)addRecursiveDescriptionWithLevel:(unsigned long long)a0 toString:(id)a1;
- (void)collectDescendantsIntoArray:(id)a0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;

@end
