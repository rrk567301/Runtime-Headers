@class NSString, NSMutableArray;

@interface ABXMLParseNode : NSObject {
    NSString *_string;
    long long _nodeType;
    NSMutableArray *_children;
    ABXMLParseNode *_parent;
}

- (long long)nodeType;
- (id)parent;
- (void).cxx_destruct;
- (id)description;
- (id)string;
- (id)children;
- (void)setParent:(id)a0;
- (long long)childCount;
- (void)addChild:(id)a0;
- (id)childAtIndex:(long long)a0;
- (BOOL)hasChildren;
- (id)childNodesMatchingString:(id)a0;
- (id)initWithString:(id)a0 nodeType:(long long)a1;
- (id)objectGraphDescription;

@end
