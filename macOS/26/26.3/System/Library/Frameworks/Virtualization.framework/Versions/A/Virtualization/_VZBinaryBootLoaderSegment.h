@class NSURL;

@interface _VZBinaryBootLoaderSegment : NSObject <NSCopying>

@property (readonly) NSURL *binaryURL;
@property (readonly) unsigned long long loadAddress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBinaryURL:(id)a0 loadAddress:(unsigned long long)a1;

@end
