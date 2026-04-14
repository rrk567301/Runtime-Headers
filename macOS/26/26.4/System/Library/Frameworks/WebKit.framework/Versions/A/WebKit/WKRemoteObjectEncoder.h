@interface WKRemoteObjectEncoder : NSCoder {
    struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> { struct Dictionary *m_ptr; } _rootDictionary;
    struct RefPtr<API::Array, WTF::RawPtrTraits<API::Array>, WTF::DefaultRefDerefTraits<API::Array>> { struct Array *m_ptr; } _objectStream;
    struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> { struct Dictionary *m_ptr; } _currentDictionary;
    struct HashSet<WTF::RetainPtr<NSObject>, WTF::DefaultHash<WTF::RetainPtr<NSObject>>, WTF::HashTraits<WTF::RetainPtr<NSObject>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<WTF::RetainPtr<NSObject>, WTF::RetainPtr<NSObject>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<NSObject>>, WTF::HashTraits<WTF::RetainPtr<NSObject>>, WTF::HashTraits<WTF::RetainPtr<NSObject>>, WTF::FastMalloc> { void *m_table; } m_impl; } _objectsBeingEncoded;
}

- (BOOL)allowsKeyedCoding;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (BOOL)requiresSecureCoding;
- (void *)rootObjectDictionary;

@end
