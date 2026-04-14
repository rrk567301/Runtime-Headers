@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {
    double _duration;
}

@property (readonly, nonatomic) NSURL *generatedFileURL;

- (void).cxx_destruct;
- (id)init;
- (void)generateFileWithCompletionHandler:(id /* block */)a0;
- (id)initWithGeneratedFileURL:(id)a0 duration:(double)a1;

@end
