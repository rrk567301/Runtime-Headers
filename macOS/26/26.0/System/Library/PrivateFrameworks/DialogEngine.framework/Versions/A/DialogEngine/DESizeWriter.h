@interface DESizeWriter : NSObject <DEWriter>

@property (nonatomic) unsigned long long size;

- (void)writeData:(id)a0;
- (id)init;
- (void)close;

@end
