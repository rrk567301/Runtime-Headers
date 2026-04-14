@class NSXMLObjectStore2, NSXMLNode;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {
    NSXMLNode *_externalData;
    NSXMLObjectStore2 *_store;
}

- (id)entityName;
- (id)valueForKey:(id)a0;
- (void)resetCaches;
- (id)store;
- (void)setStore:(id)a0;
- (id)description;
- (id)externalData;
- (void)dealloc;
- (id)initWithData:(id)a0 objectID:(id)a1;
- (id)oidReferenceData;

@end
