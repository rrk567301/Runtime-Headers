@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (id)readString;
- (unsigned int)readUInt32;
- (unsigned long long)position;
- (void)popLimit:(unsigned long long)a0;
- (BOOL)skipField:(int)a0;
- (int)readInt32;
- (BOOL)readBool;
- (long long)readInt64;
- (void)checkLastTagWas:(int)a0;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (id)initWithData:(id)a0;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (int)readEnum;
- (unsigned long long)readFixed64;
- (long long)readSInt64;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (int)readSFixed32;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (id)readBytes;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (BOOL)isAtEnd;
- (unsigned int)readFixed32;
- (void)skipMessage;
- (int)readSInt32;
- (long long)readSFixed64;
- (float)readFloat;
- (double)readDouble;
- (unsigned long long)readUInt64;
- (int)readTag;
- (void)dealloc;

@end
