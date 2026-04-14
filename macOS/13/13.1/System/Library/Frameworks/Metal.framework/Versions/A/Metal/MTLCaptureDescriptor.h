@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id captureObject;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSURL *outputURL;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
