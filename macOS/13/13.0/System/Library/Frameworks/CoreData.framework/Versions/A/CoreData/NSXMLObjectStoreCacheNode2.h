@class NSXMLObjectStore2, NSXMLNode;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {
    NSXMLNode *_externalData;
    NSXMLObjectStore2 *_store;
}

- (void)dealloc;
- (id)description;
- (id)valueForKey:(id)a0;
- (id)store;
- (id)entityName;
- (void)setStore:(id)a0;
- (id)initWithData:(id)a0 objectID:(id)a1;
- (id)oidReferenceData;
- (void)resetCaches;
- (id)externalData;

@end
