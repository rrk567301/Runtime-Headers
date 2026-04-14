@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (BOOL)isAtEnd;
- (unsigned long long)position;
- (double)readDouble;
- (float)readFloat;
- (int)readInt32;
- (long long)readInt64;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (id)readString;
- (int)readSInt32;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (void)checkLastTagWas:(int)a0;
- (BOOL)skipField:(int)a0;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (void)skipMessage;
- (int)readTag;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (void)popLimit:(unsigned long long)a0;
- (BOOL)readBool;
- (id)readBytes;
- (int)readEnum;
- (int)readSFixed32;
- (long long)readSFixed64;
- (long long)readSInt64;

@end
