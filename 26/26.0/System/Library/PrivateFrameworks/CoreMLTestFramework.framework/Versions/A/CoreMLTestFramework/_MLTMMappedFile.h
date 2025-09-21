@class NSData, NSURL;

@interface _MLTMMappedFile : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
