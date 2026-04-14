@class CIContext;

@interface IKImageRenderInfo : NSObject {
    struct CGColorSpace { } *_contextColorSpace;
}

@property unsigned long long bitsPerComponent;
@property (retain) CIContext *ciContext;
@property BOOL usingSoftwareRenderer;
@property struct CGColorSpace { } *contextColorSpace;

- (void)dealloc;

@end
