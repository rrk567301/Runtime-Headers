@interface ISyncChange : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)changeWithType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

- (id)changes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)entityName;
- (int)type;
- (id)recordIdentifier;
- (id)description;
- (id)record;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

@end
