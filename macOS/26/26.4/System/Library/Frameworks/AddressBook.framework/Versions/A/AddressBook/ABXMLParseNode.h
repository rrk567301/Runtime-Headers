@class NSString, NSMutableArray;

@interface ABXMLParseNode : NSObject {
    NSString *_string;
    long long _nodeType;
    NSMutableArray *_children;
    ABXMLParseNode *_parent;
}

- (id)children;
- (id)parent;
- (void)setParent:(id)a0;
- (long long)nodeType;
- (void).cxx_destruct;
- (id)string;
- (id)description;
- (long long)childCount;
- (void)addChild:(id)a0;
- (id)childAtIndex:(long long)a0;
- (BOOL)hasChildren;
- (id)childNodesMatchingString:(id)a0;
- (id)initWithString:(id)a0 nodeType:(long long)a1;
- (id)objectGraphDescription;

@end
