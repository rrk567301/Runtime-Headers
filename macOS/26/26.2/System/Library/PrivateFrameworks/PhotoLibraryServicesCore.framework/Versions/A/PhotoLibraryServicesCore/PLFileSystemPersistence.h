@class NSObject;
@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}

+ (id)sharedInstance;
+ (id)persistenceKeyTypes;
+ (void)persistUUIDString:(id)a0 forKey:(id)a1 fileURL:(id)a2;
+ (id)persistedAttributesForFileAtURL:(id)a0 exists:(BOOL *)a1 includeUnknownAttributes:(BOOL)a2;
+ (void)persistMetadata:(id)a0 fileURL:(id)a1;
+ (void)persistData:(id)a0 forKey:(id)a1 fileURL:(id)a2;
+ (void)persistUInt16:(unsigned short)a0 forKey:(id)a1 fileURL:(id)a2;
+ (id)filesystemPersistenceBatchItemForFileAtURL:(id)a0;
+ (void)performBlockOnWriterQueue:(id /* block */)a0;
+ (void)clearAllAttributesForFileAtUrl:(id)a0;
+ (void)persistString:(id)a0 forKey:(id)a1 fileURL:(id)a2;
+ (id)persistedAttributesForFileAtURL:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_backgroundWriteData:(id)a0 toFileAtURL:(id)a1;
- (void)_performOnWriterQueueWithIdentifier:(const char *)a0 block:(id /* block */)a1;

@end
