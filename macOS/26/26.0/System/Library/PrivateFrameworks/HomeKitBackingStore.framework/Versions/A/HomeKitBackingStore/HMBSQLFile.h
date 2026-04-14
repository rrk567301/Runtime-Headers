@class NSHashTable;

@interface HMBSQLFile : HMFObject

@property (class, readonly, nonatomic) NSHashTable *contexts;

+ (void)removeDatastoreAtURL:(id)a0;
+ (void)_close:(id)a0;
+ (id)_openContextWithURL:(id)a0 usingSubclass:(Class)a1 error:(id *)a2;
+ (void)close:(id)a0;
+ (id)openContextWithURL:(id)a0 usingSubclass:(Class)a1 error:(id *)a2;

@end
