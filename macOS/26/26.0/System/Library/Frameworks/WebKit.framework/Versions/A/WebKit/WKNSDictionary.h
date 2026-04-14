@class NSString;

@interface WKNSDictionary : NSDictionary <WKObject> {
    struct AlignedStorage<API::Dictionary, 8UL> { struct Storage { unsigned char data[24]; } m_storage; } _dictionary;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (struct Ref<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> { struct Dictionary *x0; })_protectedDictionary;

@end
