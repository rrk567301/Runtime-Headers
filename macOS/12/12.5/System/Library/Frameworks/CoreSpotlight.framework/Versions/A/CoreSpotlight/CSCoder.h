@class NSData;

@interface CSCoder : NSObject <CSCoderData>

@property (readonly, nonatomic) struct _MDPlistContainer { } *container;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) NSData *data;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0;
- (void)beginType:(const char *)a0;
- (void)encodeInt32:(int)a0;
- (void)beginDictionary;
- (void)encodeString:(const char *)a0 length:(long long)a1;
- (void)encodeMDPlistObject:(struct { char *x0; struct { unsigned int x0; unsigned char x1; } x1; })a0;
- (void)endDictionary;
- (void)endType;
- (const struct _MDPlistContainer { } *)plistContainer;
- (void)encodeBool:(BOOL)a0;
- (void)encodeInt64:(long long)a0;
- (void)encodeDouble:(double)a0;
- (void)encodeString:(const char *)a0;
- (void)encodeData:(const void *)a0 length:(long long)a1;
- (void)encodeObject:(id)a0 withKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(const char *)a1 keyLength:(long long)a2;
- (void)encodeString:(const char *)a0 stringLength:(long long)a1 forKey:(const char *)a2 keyLength:(long long)a3;
- (void)encodeNSString:(id)a0;
- (void)beginArray;
- (void)endArray;

@end
