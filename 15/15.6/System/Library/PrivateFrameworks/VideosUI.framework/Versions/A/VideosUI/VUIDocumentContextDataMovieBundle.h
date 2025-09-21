@class NSString;

@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieBundleID;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonData;
- (id)initWithMovieBundleID:(id)a0;

@end
