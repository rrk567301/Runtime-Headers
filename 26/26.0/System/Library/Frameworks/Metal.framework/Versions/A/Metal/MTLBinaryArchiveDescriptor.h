@class NSURL;

@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long writingOptions;
@property (copy, nonatomic) NSURL *url;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
