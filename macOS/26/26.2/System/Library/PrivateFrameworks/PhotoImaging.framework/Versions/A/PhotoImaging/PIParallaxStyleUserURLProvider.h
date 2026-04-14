@class NSURL;

@interface PIParallaxStyleUserURLProvider : NSObject <PIParallaxStyleURLProvider>

@property (retain, nonatomic) NSURL *baseURL;

- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)urlForIdentifier:(id)a0;

@end
