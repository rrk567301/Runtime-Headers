@class NSXMLObjectStore2, NSXMLNode;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {
    NSXMLNode *_externalData;
    NSXMLObjectStore2 *_store;
}

- (void)dealloc;
- (void)setStore:(id)a0;
- (id)entityName;
- (id)valueForKey:(id)a0;
- (id)description;
- (id)store;
- (void)resetCaches;
- (id)externalData;
- (id)initWithData:(id)a0 objectID:(id)a1;
- (id)oidReferenceData;

@end
