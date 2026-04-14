@interface WKKeyedCoder : NSCoder {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } m_dictionary;
    BOOL m_failedDecoding;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)requiresSecureCoding;
- (id)accumulatedDictionary;

@end
