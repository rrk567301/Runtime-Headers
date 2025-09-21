@interface SKDiskImageResizeParams : NSObject

@property (nonatomic) unsigned long long size;
@property (nonatomic) char stdinPassPhrase;
@property (nonatomic) char shallow;

- (id)initWithSize:(unsigned long long)a0;

@end
