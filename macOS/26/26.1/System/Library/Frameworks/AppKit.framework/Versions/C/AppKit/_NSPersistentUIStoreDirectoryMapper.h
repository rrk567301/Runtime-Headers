@class NSURL;

@interface _NSPersistentUIStoreDirectoryMapper : NSObject {
    void /* unknown type, empty encoding */ _savedApplicationStateDirectoryURL;
    void /* unknown type, empty encoding */ _storageMappingURL;
    void /* unknown type, empty encoding */ _identifiersToUUID;
    void /* unknown type, empty encoding */ _ioQueue;
}

@property (nonatomic, readonly) NSURL *savedApplicationStateDirectoryURL;

- (void).cxx_destruct;
- (id)init;
- (void)flushImmediately;
- (id)initWithContainerURL:(id)a0;
- (id)persistentStateDirectoryURLForAuditToken:(struct { unsigned int x0[8]; })a0;

@end
