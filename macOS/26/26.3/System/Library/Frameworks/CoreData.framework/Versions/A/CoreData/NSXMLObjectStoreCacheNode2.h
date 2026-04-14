@class NSXMLObjectStore2, NSXMLNode;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {
    NSXMLNode *_externalData;
    NSXMLObjectStore2 *_store;
}

- (id)entityName;
- (void)setStore:(id)a0;
- (id)description;
- (id)store;
- (id)valueForKey:(id)a0;
- (void)resetCaches;
- (void)dealloc;
- (id)externalData;
- (id)initWithData:(id)a0 objectID:(id)a1;
- (id)oidReferenceData;

@end
