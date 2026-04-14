@class PFSQLiteColumn, NSString, PFSQLiteCodingDescriptor, PFGenericValueTransformer;
@protocol PFSQLiteMutator, PFSQLiteAccessor;

@interface _PFSQLiteKeyedArchiverTransaction : NSObject <PFArchiving> {
    id<PFSQLiteMutator> _mutator;
    id<PFSQLiteAccessor> _accessor;
    PFSQLiteCodingDescriptor *_codingDescriptor;
    PFSQLiteColumn *_keyColumn;
    PFGenericValueTransformer *_archiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1;
- (BOOL)setDouble:(double)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)setURL:(id)a0 forKey:(id)a1;
- (id)dateCreatedForKey:(id)a0;
- (id)initWithPFSQLiteAccessor:(id)a0 archiver:(id)a1;
- (id)initWithPFSQLiteMutator:(id)a0 archiver:(id)a1;
- (id)lastModifiedForKey:(id)a0;
- (id)objectForKey:(id)a0 ofClasses:(id)a1;

@end
