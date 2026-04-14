@class NSString, NSData, NSMutableArray, NSLock;

@interface ISS_DMDataFromFile : NSData {
    NSData *_embeddedData;
    NSMutableArray *_previousData;
    NSString *_localPath;
    NSLock *_dataLock;
}

+ (id)dataWithLocalFile:(id)a0;

- (void)dealloc;
- (void)finalize;
- (unsigned int)length;
- (const void *)bytes;
- (void)reinitialize;
- (id)initWithLocalFile:(id)a0;
- (void)_setEmbeddedData:(id)a0;

@end
