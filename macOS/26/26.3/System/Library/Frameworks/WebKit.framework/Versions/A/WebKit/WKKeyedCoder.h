@class NSMutableDictionary;

@interface WKKeyedCoder : NSCoder {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } m_dictionary;
    BOOL m_failedDecoding;
}

- (BOOL)decodeBoolForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (id)init;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id).cxx_construct;
- (BOOL)containsValueForKey:(id)a0;
- (BOOL)requiresSecureCoding;
- (id)accumulatedDictionary;

@end
