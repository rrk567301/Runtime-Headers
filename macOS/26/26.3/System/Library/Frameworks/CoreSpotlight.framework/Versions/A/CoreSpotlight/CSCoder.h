@class NSData;

@interface CSCoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct _MDPlistContainer { } *container;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) NSData *data;

+ (id)encodeURL:(id)a0 withSandboxExtensionData:(id)a1;
+ (id)encodeURLPreservingSecurityScope:(id)a0;

- (void)encodeObject:(id)a0;
- (void)beginArray;
- (void)encodeNSString:(id)a0;
- (void)beginDictionary;
- (id)init;
- (void)encodeInt32:(int)a0;
- (void)encodeBool:(BOOL)a0;
- (void)encodeString:(const char *)a0;
- (void)endType;
- (void)endArray;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0 forKey:(const char *)a1 keyLength:(long long)a2;
- (void)encodeData:(const void *)a0 length:(long long)a1;
- (void)encodeString:(const char *)a0 stringLength:(long long)a1 forKey:(const char *)a2 keyLength:(long long)a3;
- (struct _MDPlistContainer { } *)plistContainer;
- (void)beginType:(const char *)a0;
- (void)encodeObject:(id)a0 withKey:(id)a1;
- (void)dealloc;
- (void)encodeMDPlistObject:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a0;
- (void)encodeDouble:(double)a0;
- (void)encodeInt64:(long long)a0;
- (void)endDictionary;
- (void)encodeString:(const char *)a0 length:(long long)a1;

@end
