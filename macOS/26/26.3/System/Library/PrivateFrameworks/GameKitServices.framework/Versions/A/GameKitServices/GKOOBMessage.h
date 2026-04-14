@interface GKOOBMessage : NSObject

@property (readonly) unsigned short type;

- (id)data;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithMessageType:(unsigned short)a0;
- (BOOL)_checkSize:(unsigned long long)a0;
- (BOOL)_checkType:(unsigned short)a0;

@end
