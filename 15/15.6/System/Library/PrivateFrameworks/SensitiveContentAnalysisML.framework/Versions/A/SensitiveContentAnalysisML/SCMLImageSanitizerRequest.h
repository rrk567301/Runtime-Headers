@class NSArray, NSUUID;

@interface SCMLImageSanitizerRequest : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) char keepGoing;
@property (retain, nonatomic) NSArray *embeddings;
@property (nonatomic) unsigned int style;
@property (nonatomic) char isChildPresent;
@property (retain, nonatomic) NSUUID *userRequestID;

- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;

@end
