@class NSLock, NSFileHandle;

@interface ISS_DMDataFromMappedFile : NSData {
    NSFileHandle *_fileHandle;
    NSLock *_dataLock;
    void *_data;
    unsigned long long _len;
    BOOL _alreadyInitialized;
    BOOL _lenInitialized;
}

- (void)finalize;
- (void)dealloc;
- (unsigned int)length;
- (const void *)bytes;
- (id)initWithFileHandle:(id)a0;
- (void)_initMapping;
- (void)_initLength;
- (void)simulateAdditionalWrite;

@end
