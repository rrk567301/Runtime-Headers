@interface __SwiftValue : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (const void *)_swiftTypeMetadata;
- (id)_swiftTypeName;
- (const struct OpaqueValue { } *)_swiftValue;

@end
