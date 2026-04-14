@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (int)readTag;
- (BOOL)isAtEnd;
- (double)readDouble;
- (unsigned int)readUInt32;
- (long long)readInt64;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (id)initWithData:(id)a0;
- (int)readSFixed32;
- (unsigned long long)position;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (float)readFloat;
- (long long)readSFixed64;
- (id)readString;
- (BOOL)readBool;
- (int)readSInt32;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (unsigned long long)readFixed64;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (long long)readSInt64;
- (int)readEnum;
- (void)skipMessage;
- (void)dealloc;
- (id)readBytes;
- (unsigned int)readFixed32;
- (int)readInt32;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (unsigned long long)readUInt64;
- (void)checkLastTagWas:(int)a0;
- (BOOL)skipField:(int)a0;
- (void)popLimit:(unsigned long long)a0;

@end
