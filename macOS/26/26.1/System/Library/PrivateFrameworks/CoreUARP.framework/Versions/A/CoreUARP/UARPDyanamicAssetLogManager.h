@class NSURL;

@interface UARPDyanamicAssetLogManager : NSObject

@property (readonly) NSURL *baseURL;

- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)newLog:(id)a0 error:(id *)a1;

@end
