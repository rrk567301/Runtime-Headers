@class NSString;
@protocol FFFileReader;

@interface FFImmutableOnlyFileReader : NSObject <FFFileReader>

@property (retain, nonatomic) id<FFFileReader> underlying;
@property (retain, nonatomic) NSString *immutablePathPrefix;
@property (retain, nonatomic) NSString *immutableInternalPathPrefix;

- (void).cxx_destruct;
- (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (id)dictionaryWithContentsOfURL:(id)a0 error:(id *)a1;

@end
