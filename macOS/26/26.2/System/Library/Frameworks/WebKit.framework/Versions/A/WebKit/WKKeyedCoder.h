@class NSMutableDictionary;

@interface WKKeyedCoder : NSCoder {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } m_dictionary;
    BOOL m_failedDecoding;
}

- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (id)initWithDictionary:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (id)init;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)requiresSecureCoding;
- (id)accumulatedDictionary;

@end
