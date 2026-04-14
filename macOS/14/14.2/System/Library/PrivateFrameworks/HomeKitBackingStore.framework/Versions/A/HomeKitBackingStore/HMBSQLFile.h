@class NSHashTable;

@interface HMBSQLFile : HMFObject

@property (class, readonly, nonatomic) NSHashTable *contexts;

+ (void)close:(id)a0;
+ (id)open:(id)a0 readOnly:(BOOL)a1 using:(Class)a2 error:(id *)a3;
+ (void)removeDatastoreAtURL:(id)a0;

@end
