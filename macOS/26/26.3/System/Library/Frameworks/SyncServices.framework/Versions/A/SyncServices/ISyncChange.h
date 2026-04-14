@interface ISyncChange : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)changeWithType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

- (id)recordIdentifier;
- (id)changes;
- (int)type;
- (id)entityName;
- (id)record;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

@end
