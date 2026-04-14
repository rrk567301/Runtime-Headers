@interface NSPortCoder : NSCoder

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)portCoderWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;

- (id)connection;
- (id)_connection;
- (BOOL)isBycopy;
- (BOOL)isByref;
- (void)encodePortObject:(id)a0;
- (id)decodePortObject;
- (void)dispatch;
- (id)initWithReceivePort:(id)a0 sendPort:(id)a1 components:(id)a2;

@end
