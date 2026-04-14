@class NSArray;

@interface MsgImageFilter : CIFilter

@property (retain) NSArray *kernels;

+ (void)initialize;
+ (id)filterName;
+ (id)kernelArray;
+ (id)ciFilterAttributes;

- (id)init;
- (void).cxx_destruct;

@end
