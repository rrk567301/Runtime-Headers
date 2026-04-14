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

- (id)mirroringDelegate;
- (void)setMirroringDelegate:(id)a0;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)a0;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forPragmaNamed:(id)a1;
- (void)setUsesPersistentHistoryTracking:(BOOL)a0;
- (void)setOption:(id)a0 forMirroringKey:(id)a1;
- (id)initWithURL:(id)a0;
- (id)description;
- (BOOL)usesPersistentHistoryTracking;
- (void)dealloc;
- (id)mirroringOptions;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOption:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
