@class NSString, NSData, NSMutableArray, NSLock;

@interface ISS_DMDataFromFile : NSData {
    NSData *_embeddedData;
    NSMutableArray *_previousData;
    NSString *_localPath;
    NSLock *_dataLock;
}

+ (id)dataWithLocalFile:(id)a0;

- (void)finalize;
- (void)dealloc;
- (unsigned int)length;
- (const void *)bytes;
- (id)initWithLocalFile:(id)a0;
- (void)reinitialize;
- (void)_setEmbeddedData:(id)a0;

@end
