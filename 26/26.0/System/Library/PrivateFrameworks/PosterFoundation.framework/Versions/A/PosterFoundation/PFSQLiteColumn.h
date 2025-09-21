@class NSString, NSValueTransformer;

@interface PFSQLiteColumn : NSObject <NSCopying, PFSQLConvertible> {
    unsigned long long _cachedHash;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSValueTransformer *valueTransformer;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) Class expectedValueClass;
@property (readonly, nonatomic) BOOL isNonnull;
@property (readonly, nonatomic) BOOL isPrimaryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ISO8601DateColumnNamed:(id)a0 attributes:(unsigned long long)a1;
+ (id)NSCodingColumnNamed:(id)a0 attributes:(unsigned long long)a1 expectedClass:(Class)a2;
+ (id)UUIDColumnNamed:(id)a0 attributes:(unsigned long long)a1;
+ (id)blobColumnNamed:(id)a0 attributes:(unsigned long long)a1;
+ (id)columnWithName:(id)a0 type:(unsigned long long)a1 attributes:(unsigned long long)a2 valueTransformer:(id)a3;
+ (id)dateColumnNamed:(id)a0 attributes:(unsigned long long)a1 dateFormatter:(id)a2;
+ (id)integerColumnNamed:(id)a0 attributes:(unsigned long long)a1;
+ (id)realColumnNamed:(id)a0 attributes:(unsigned long long)a1;
+ (id)textColumnNamed:(id)a0 attributes:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithColumnName:(id)a0 type:(unsigned long long)a1 attributes:(unsigned long long)a2 valueTransformer:(id)a3;
- (id)pf_toSQLWithBindings:(out unsigned long long *)a0;

@end
