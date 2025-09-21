@class NSXMLNode;

@interface NSXMLDocumentMapNode : NSStoreMapNode {
    NSXMLNode *_node;
}

- (void)dealloc;
- (id)valueForKey:(id)a0;
- (id)description;
- (id)initWithXMLNode:(id)a0 objectID:(id)a1;

@end
