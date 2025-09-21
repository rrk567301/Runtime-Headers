@class NSString;

@interface JPFileEntry : NSObject

@property (nonatomic) void *backing;
@property (readonly, nonatomic) char releaseBackingOnDealloc;
@property (readonly, nonatomic) NSString *pathname;

- (char)writeStream:(id)a0 toDirectory:(id)a1 error:(id *)a2;
- (id)initWithBacking:(void *)a0 releaseOnDealloc:(char)a1;

@end
