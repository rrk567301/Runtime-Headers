@class NSString, NSPersistentCloudKitContainerOptions, NSURL, NSDictionary, NSMutableDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {
    NSMutableDictionary *_options;
}

@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *type;
@property (copy) NSString *configuration;
@property (copy) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (getter=isReadOnly) BOOL readOnly;
@property double timeout;
@property (readonly, copy, nonatomic) NSDictionary *sqlitePragmas;
@property BOOL shouldAddStoreAsynchronously;
@property BOOL shouldMigrateStoreAutomatically;
@property BOOL shouldInferMappingModelAutomatically;

+ (id)persistentStoreDescriptionWithURL:(id)a0;
+ (id)inMemoryPersistentStoreDescription;

- (void)setMirroringDelegate:(id)a0;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)a0;
- (id)mirroringDelegate;
- (BOOL)usesPersistentHistoryTracking;
- (id)initWithURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mirroringOptions;
- (void)setUsesPersistentHistoryTracking:(BOOL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (id)description;
- (void)setOption:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forPragmaNamed:(id)a1;
- (void)setOption:(id)a0 forMirroringKey:(id)a1;
- (void)dealloc;

@end
