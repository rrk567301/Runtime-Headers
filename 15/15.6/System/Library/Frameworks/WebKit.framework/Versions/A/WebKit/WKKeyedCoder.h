@interface WKKeyedCoder : NSCoder {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } m_dictionary;
    BOOL m_failedDecoding;
}

- (id)init;
- (void).cxx_destruct;
- (char)allowsKeyedCoding;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeBool:(char)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id).cxx_construct;
- (char)decodeBoolForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (char)containsValueForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (char)requiresSecureCoding;
- (id)accumulatedDictionary;

@end
