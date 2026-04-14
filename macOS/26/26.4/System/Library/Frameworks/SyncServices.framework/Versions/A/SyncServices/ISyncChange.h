@interface ISyncChange : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)changeWithType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

- (id)entityName;
- (id)recordIdentifier;
- (id)changes;
- (id)record;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)type;
- (id)description;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

@end
