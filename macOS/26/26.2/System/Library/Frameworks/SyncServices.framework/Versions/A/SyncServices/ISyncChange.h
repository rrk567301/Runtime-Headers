@interface ISyncChange : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)changeWithType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

- (id)entityName;
- (id)record;
- (id)changes;
- (unsigned long long)hash;
- (id)recordIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (id)description;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

@end
