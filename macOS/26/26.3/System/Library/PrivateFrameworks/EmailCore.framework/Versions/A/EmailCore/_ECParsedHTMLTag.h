@class NSString;

@interface _ECParsedHTMLTag : _ECParsedHTMLNode {
    NSString *_tagName;
}

- (id)description;
- (void)dealloc;
- (id)tagName;
- (void)setTagName:(id)a0;
- (unsigned long long)_bodyElementChildCount;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)a0;
- (BOOL)needsPriceFormatting:(id)a0 tagName:(id)a1;

@end
