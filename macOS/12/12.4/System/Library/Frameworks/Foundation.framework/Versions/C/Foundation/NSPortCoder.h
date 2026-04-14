@interface NSPortCoder : NSCoder

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)portCoderWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;

- (id)connection;
- (id)_connection;
- (id)initWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;
- (id)decodePortObject;
- (void)encodePortObject:(id)a0;
- (BOOL)isByref;
- (BOOL)isBycopy;
- (void)dispatch;

@end
