@interface SKTemporaryPassphrase : NSObject

@property (nonatomic) char *buf;

- (void)dealloc;
- (id)initWithPassphrase:(const char *)a0;

@end
