@class NSXMLNode;

@interface NSXMLDocumentMapNode : NSStoreMapNode {
    NSXMLNode *_node;
}

- (id)description;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (id)initWithXMLNode:(id)a0 objectID:(id)a1;

@end
