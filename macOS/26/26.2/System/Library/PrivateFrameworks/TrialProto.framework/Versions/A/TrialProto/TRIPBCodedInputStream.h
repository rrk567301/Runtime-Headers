@class NSData;

@interface TRIPBCodedInputStream : NSObject {
    struct TRIPBCodedInputStreamState { char *bytes; unsigned long long bufferSize; unsigned long long bufferPos; unsigned long long currentLimit; int lastTag; unsigned long long recursionDepth; } state_;
    NSData *buffer_;
}

+ (id)streamWithData:(id)a0;

- (unsigned int)readFixed32;
- (void)checkLastTagWas:(int)a0;
- (double)readDouble;
- (unsigned long long)readFixed64;
- (int)readTag;
- (void)readMessage:(id)a0 extensionRegistry:(id)a1;
- (id)initWithData:(id)a0;
- (unsigned long long)pushLimit:(unsigned long long)a0;
- (void)skipMessage;
- (int)readEnum;
- (int)readSInt32;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (id)readBytes;
- (BOOL)readBool;
- (long long)readSInt64;
- (long long)readInt64;
- (long long)readSFixed64;
- (BOOL)skipField:(int)a0;
- (int)readSFixed32;
- (float)readFloat;
- (unsigned long long)position;
- (void)readGroup:(int)a0 message:(id)a1 extensionRegistry:(id)a2;
- (int)readInt32;
- (void)popLimit:(unsigned long long)a0;
- (void)readUnknownGroup:(int)a0 message:(id)a1;
- (id)readString;
- (void)readMapEntry:(id)a0 extensionRegistry:(id)a1 field:(id)a2 parentMessage:(id)a3;
- (BOOL)isAtEnd;
- (void)dealloc;

@end
