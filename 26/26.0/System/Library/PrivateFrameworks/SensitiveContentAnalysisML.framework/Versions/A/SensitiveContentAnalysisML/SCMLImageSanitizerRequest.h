@class NSArray, NSUUID;

@interface SCMLImageSanitizerRequest : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) BOOL keepGoing;
@property (retain, nonatomic) NSArray *embeddings;
@property (nonatomic) unsigned int style;
@property (nonatomic) BOOL isChildPresent;
@property (nonatomic) BOOL isPersonalized;
@property (retain, nonatomic) NSUUID *userRequestID;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;

@end
