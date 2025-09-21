@class _WKRemoteObjectInterface;

@interface WKRemoteObjectDecoder : NSCoder {
    struct RetainPtr<_WKRemoteObjectInterface> { _WKRemoteObjectInterface *m_ptr; } _interface;
    struct RefPtr<const API::Dictionary, WTF::RawPtrTraits<const API::Dictionary>, WTF::DefaultRefDerefTraits<const API::Dictionary>> { struct Dictionary *m_ptr; } _rootDictionary;
    struct RefPtr<const API::Dictionary, WTF::RawPtrTraits<const API::Dictionary>, WTF::DefaultRefDerefTraits<const API::Dictionary>> { struct Dictionary *m_ptr; } _currentDictionary;
    SEL _replyToSelector;
    struct RefPtr<const API::Array, WTF::RawPtrTraits<const API::Array>, WTF::DefaultRefDerefTraits<const API::Array>> { struct Array *m_ptr; } _objectStream;
    unsigned long long _objectStreamPosition;
    const void *_allowedClasses;
}

- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (float)decodeFloatForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)allowedClasses;
- (id).cxx_construct;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (void).cxx_destruct;
- (BOOL)requiresSecureCoding;
- (id)initWithInterface:(id)a0 rootObjectDictionary:(void *)a1 replyToSelector:(SEL)a2;

@end
