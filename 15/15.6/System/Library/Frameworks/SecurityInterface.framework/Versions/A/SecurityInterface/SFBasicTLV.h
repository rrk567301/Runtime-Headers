@class NSData;

@interface SFBasicTLV : NSObject {
    NSData *mInputData;
    unsigned int mLength;
    const char *mBytePtr;
    unsigned char mTag;
    unsigned int mOutputLength;
    unsigned int mLastLength;
}

+ (unsigned int)parseBERLength:(const char **)a0 lenlen:(unsigned int *)a1;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (char)getNext:(id *)a0 tag:(char *)a1;
- (char)getNextBER:(id *)a0 tag:(char *)a1 noAdvance:(char)a2;
- (id)inputData;
- (unsigned int)lastLength;
- (void)setInputData:(id)a0;
- (void)skip:(unsigned int)a0;

@end
