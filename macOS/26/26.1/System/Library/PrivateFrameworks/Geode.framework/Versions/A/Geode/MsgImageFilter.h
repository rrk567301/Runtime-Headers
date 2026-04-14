@class NSArray;

@interface MsgImageFilter : CIFilter

@property (retain) NSArray *kernels;

+ (void)initialize;
+ (id)filterName;
+ (id)ciFilterAttributes;
+ (id)kernelArray;

- (void).cxx_destruct;
- (id)init;

@end
