@class NSData;

@interface CSCoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct _MDPlistContainer { } *container;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) NSData *data;

+ (id)encodeURL:(id)a0 withSandboxExtensionData:(id)a1;
+ (id)encodeURLPreservingSecurityScope:(id)a0;

- (void)encodeObject:(id)a0;
- (void)dealloc;
- (void)encodeString:(const char *)a0;
- (void)encodeDouble:(double)a0;
- (id)init;
- (void)encodeInt64:(long long)a0;
- (void)endType;
- (void)encodeString:(const char *)a0 length:(long long)a1;
- (void)beginType:(const char *)a0;
- (void)endDictionary;
- (struct _MDPlistContainer { } *)plistContainer;
- (void)encodeBool:(BOOL)a0;
- (void)encodeObject:(id)a0 forKey:(const char *)a1 keyLength:(long long)a2;
- (void)encodeMDPlistObject:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0;
- (void)encodeInt32:(int)a0;
- (void)encodeData:(const void *)a0 length:(long long)a1;
- (void)endArray;
- (void)encodeObject:(id)a0 withKey:(id)a1;
- (void)beginDictionary;
- (void)encodeNSString:(id)a0;
- (void)beginArray;
- (void).cxx_destruct;
- (void)encodeString:(const char *)a0 stringLength:(long long)a1 forKey:(const char *)a2 keyLength:(long long)a3;

@end
