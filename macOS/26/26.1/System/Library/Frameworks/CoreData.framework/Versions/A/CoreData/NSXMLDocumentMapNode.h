@class NSXMLNode;

@interface NSXMLDocumentMapNode : NSStoreMapNode {
    NSXMLNode *_node;
}

- (id)valueForKey:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithXMLNode:(id)a0 objectID:(id)a1;

@end
