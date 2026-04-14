@interface TSKSelection : NSObject <NSCopying>

+ (Class)archivedSelectionClass;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUIDDescription;
- (id)archivedSelectionWithContext:(id)a0;

@end
