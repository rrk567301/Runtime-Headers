@interface GKOOBMessage : NSObject

@property (readonly) unsigned short type;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)data;
- (id)initWithMessageType:(unsigned short)a0;
- (char)_checkSize:(unsigned long long)a0;
- (char)_checkType:(unsigned short)a0;

@end
