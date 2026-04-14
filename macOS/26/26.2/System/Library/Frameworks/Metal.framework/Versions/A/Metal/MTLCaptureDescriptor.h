@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id captureObject;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSURL *outputURL;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
