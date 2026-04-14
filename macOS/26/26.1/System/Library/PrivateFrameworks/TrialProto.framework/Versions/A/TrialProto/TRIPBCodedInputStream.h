@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (unsigned long long)position;
- (void)skipMessage;
- (id)initWithData:(id)a0;
- (unsigned long long)readFixed64;
- (BOOL)skipField:(int)a0;
- (BOOL)isAtEnd;
- (long long)readSInt64;
- (id)readString;
- (int)readSInt32;
- (int)readInt32;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (void)popLimit:(unsigned long long)a0;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (long long)readInt64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (unsigned int)readUInt32;
- (void)dealloc;
- (id)readBytes;
- (double)readDouble;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (long long)readSFixed64;
- (BOOL)readBool;
- (int)readSFixed32;
- (unsigned int)readFixed32;
- (unsigned long long)readUInt64;
- (int)readEnum;
- (int)readTag;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (void)checkLastTagWas:(int)a0;
- (float)readFloat;

@end
