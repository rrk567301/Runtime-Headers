@class NSData, NSString;

@interface OBEXFilePut : OBEXFileAction {
    int mIsFileTransfer;
    unsigned int mLastFileOffset;
    NSData *mData;
    NSString *mDataName;
    NSString *mDataType;
}

+ (id)withOBEXSession:(id)a0 target:(id)a1 eventSelector:(SEL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)initForNewAction;
- (void)startCommand;
- (int)putFileToRemote:(id)a0;
- (int)putDataToRemote:(id)a0 type:(id)a1 name:(id)a2;
- (void)OBEXPutHandler:(struct OBEXPutCommandResponseData { unsigned char x0; void *x1; unsigned long long x2; } *)a0;
- (id)getNextFileChunk:(id)a0 optionalHeaderLength:(unsigned long long)a1 isLastChunk:(char *)a2;
- (id)getNextDataChunk:(id)a0 optionalHeaderLength:(unsigned long long)a1 isLastChunk:(char *)a2;
- (void)setCountHeader:(int)a0;

@end
