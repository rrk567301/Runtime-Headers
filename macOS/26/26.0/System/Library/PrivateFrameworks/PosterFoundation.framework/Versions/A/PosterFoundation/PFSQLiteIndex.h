@class NSArray, NSOrderedSet, NSString;

@interface PFSQLiteIndex : NSObject <NSCopying, PFSQLConvertible> {
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, copy, nonatomic) NSOrderedSet *columnNames;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)compositeIndexNamed:(id)a0 columns:(id)a1;
+ (id)indexNamed:(id)a0 columns:(id)a1;
+ (id)primaryKeyIndexNamed:(id)a0 columns:(id)a1;
+ (id)uniqueIndexNamed:(id)a0 columns:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)pf_toSQLWithBindings:(out unsigned long long *)a0;

@end
