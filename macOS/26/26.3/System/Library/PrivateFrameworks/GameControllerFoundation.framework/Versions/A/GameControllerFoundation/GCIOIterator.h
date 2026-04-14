@class NSString;

@interface GCIOIterator : NSEnumerator <GCIOObject> {
    unsigned int _port;
    Class _objectClass;
}

@property (class, readonly) NSString *className;

@property (readonly) NSString *className;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextObject;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)conformsTo:(const char *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithPort:(unsigned int)a0 objectClass:(Class)a1 error:(id *)a2;

@end
