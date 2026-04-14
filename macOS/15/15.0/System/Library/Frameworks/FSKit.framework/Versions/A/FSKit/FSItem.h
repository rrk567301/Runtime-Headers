@class NSData;

@interface FSItem : NSObject

@property (retain) NSData *fileHandle;

+ (id)FileHandleForFileID:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
