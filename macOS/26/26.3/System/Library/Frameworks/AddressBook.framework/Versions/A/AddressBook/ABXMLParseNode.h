@class NSString, NSMutableArray;

@interface ABXMLParseNode : NSObject {
    NSString *_string;
    long long _nodeType;
    NSMutableArray *_children;
    ABXMLParseNode *_parent;
}

- (void)setParent:(id)a0;
- (id)children;
- (id)parent;
- (long long)nodeType;
- (id)description;
- (void).cxx_destruct;
- (long long)childCount;
- (id)string;
- (void)addChild:(id)a0;
- (id)childAtIndex:(long long)a0;
- (BOOL)hasChildren;
- (id)childNodesMatchingString:(id)a0;
- (id)initWithString:(id)a0 nodeType:(long long)a1;
- (id)objectGraphDescription;

@end
