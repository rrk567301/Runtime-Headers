@class NSData, NSURL;

@interface _MLTMMappedFile : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
