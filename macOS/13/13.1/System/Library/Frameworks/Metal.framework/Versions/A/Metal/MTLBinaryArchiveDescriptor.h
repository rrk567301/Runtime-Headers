@class NSURL;

@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long writingOptions;
@property (copy, nonatomic) NSURL *url;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
