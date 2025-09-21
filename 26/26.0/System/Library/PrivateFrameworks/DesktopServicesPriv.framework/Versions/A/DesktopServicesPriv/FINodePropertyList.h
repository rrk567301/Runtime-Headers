@interface FINodePropertyList : NSObject <NSCopying, NSMutableCopying> {
    struct TRef<OpaquePropertyListRef *, TRetainReleasePolicy<NodePropertyListRef>> { struct OpaquePropertyListRef *fRef; } _propertyList;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)asString:(unsigned int)a0 error:(id *)a1;
- (struct OpaquePropertyListRef { } *)propertyListRef;
- (id)asArray:(unsigned int)a0 error:(id *)a1;
- (BOOL)asBool:(unsigned int)a0 error:(id *)a1;
- (BOOL)asData:(void *)a0 capacity:(unsigned int)a1 length:(unsigned int *)a2 forProperty:(unsigned int)a3 error:(id *)a4;
- (id)asData:(unsigned int)a0 error:(id *)a1;
- (id)asDate:(unsigned int)a0 error:(id *)a1;
- (struct OpaqueIconRef { } *)asIconRef:(unsigned int)a0 error:(id *)a1;
- (short)asInt16:(unsigned int)a0 error:(id *)a1;
- (int)asInt32:(unsigned int)a0 error:(id *)a1;
- (long long)asInt64:(unsigned int)a0 error:(id *)a1;
- (char)asInt8:(unsigned int)a0 error:(id *)a1;
- (id)initWithPropertyListRef:(struct OpaquePropertyListRef { } *)a0;
- (void)setPropertyListRef:(struct OpaquePropertyListRef { } *)a0;

@end
