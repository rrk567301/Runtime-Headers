@interface __SwiftValue : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (const struct OpaqueValue { } *)_swiftValue;
- (unsigned long long)hash;
- (id)_swiftTypeName;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (const void *)_swiftTypeMetadata;

@end
