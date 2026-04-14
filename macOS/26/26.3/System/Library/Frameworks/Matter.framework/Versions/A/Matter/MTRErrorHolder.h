@interface MTRErrorHolder : NSObject

@property (readonly, nonatomic) struct ChipError { unsigned int mError; unsigned int mLine; char *mFile; } error;

- (id)initWithError:(struct ChipError { unsigned int x0; unsigned int x1; char *x2; })a0;

@end
