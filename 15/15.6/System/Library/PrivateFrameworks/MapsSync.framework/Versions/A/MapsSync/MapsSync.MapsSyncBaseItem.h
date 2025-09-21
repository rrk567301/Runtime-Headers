@class NSUUID, NSString, NSDate, OS_dispatch_queue;

@interface MapsSync.MapsSyncBaseItem : MapsSync.MapsSyncObjectWrapper {
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _createTime;
    void /* unknown type, empty encoding */ _modificationTime;
    void /* unknown type, empty encoding */ _editBlocks;
    void /* unknown type, empty encoding */ _editBlocksLock;
}

@property (class, nonatomic, readonly) OS_dispatch_queue *_queue;
@property (class, nonatomic, readonly) OS_dispatch_queue *_callbackQueue;

@property (nonatomic, copy) NSUUID *_identifier;
@property (nonatomic, copy) NSDate *_createTime;
@property (nonatomic, copy) NSDate *_modificationTime;
@property (nonatomic) void /* unknown type, empty encoding */ _positionIndex;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _readContext;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDate *createTime;
@property (nonatomic, readonly) NSDate *modificationTime;
@property (nonatomic, readonly) long long positionIndex;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)validate;
- (Class)managedObjectClass;
- (id)callCleanInObjc:(id)a0;
- (void)addEditWithBlock:(id /* block */)a0;
- (void)commitEditsWithCompletion:(id /* block */)a0;
- (void)deleteWithCompletion:(id /* block */)a0;
- (void)executeOnFirstSave:(id)a0;
- (char)isDuplicateOfOther:(id)a0;
- (id)mutableObject:(id)a0;
- (Class)mutableObjectClass;
- (id)performEditsWithoutSavingWithCompletion:(id /* block */)a0;
- (void)persistObject:(id)a0 saveContext:(char)a1 completion:(id /* block */)a2;
- (void)setPropertiesWithObject:(id)a0;
- (void)setReadContextWithContext:(id)a0;

@end
