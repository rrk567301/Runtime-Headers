@class NSString, NSArray;

@interface PICompositionSidecarData : NSObject

@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSArray *maskSources;

+ (id)loadFromURL:(id)a0 error:(out id *)a1;
+ (id)dataForImageBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
+ (id)imageBufferFromData:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)saveToURL:(id)a0 error:(out id *)a1;
- (id)contentsDictionary;

@end
