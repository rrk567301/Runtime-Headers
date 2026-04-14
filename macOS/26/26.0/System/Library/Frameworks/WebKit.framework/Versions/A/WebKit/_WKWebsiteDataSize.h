@interface _WKWebsiteDataSize : NSObject {
    struct Size { unsigned long long totalSize; struct HashMap<unsigned int, unsigned long long, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned long long>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes, WTF::FastMalloc> { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, unsigned long long>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, unsigned long long>::KeyValuePairTraits, WTF::HashTraits<unsigned int>, WTF::FastMalloc> { void *m_table; } m_impl; } typeSizes; } _size;
}

@property (readonly, nonatomic) unsigned long long totalSize;

- (id).cxx_construct;
- (id)initWithSize:(const void *)a0;
- (void).cxx_destruct;
- (unsigned long long)sizeOfDataTypes:(id)a0;

@end
