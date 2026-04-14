@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (int)readTag;
- (id)readBytes;
- (void)popLimit:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void)skipMessage;
- (int)readSInt32;
- (void)dealloc;
- (int)readInt32;
- (int)readEnum;
- (double)readDouble;
- (unsigned long long)readFixed64;
- (void)checkLastTagWas:(int)a0;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (unsigned int)readFixed32;
- (id)readString;
- (BOOL)isAtEnd;
- (int)readSFixed32;
- (long long)readInt64;
- (BOOL)readBool;
- (BOOL)skipField:(int)a0;
- (unsigned long long)readUInt64;
- (long long)readSInt64;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (unsigned long long)position;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (float)readFloat;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (unsigned int)readUInt32;
- (long long)readSFixed64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;

@end
