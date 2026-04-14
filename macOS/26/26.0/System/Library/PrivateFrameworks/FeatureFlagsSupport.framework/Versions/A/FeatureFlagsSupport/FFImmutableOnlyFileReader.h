@class NSString;
@protocol FFFileReader;

@interface FFImmutableOnlyFileReader : NSObject <FFFileReader>

@property (retain, nonatomic) id<FFFileReader> underlying;
@property (retain, nonatomic) NSString *immutablePathPrefix;
@property (retain, nonatomic) NSString *immutableInternalPathPrefix;

- (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (id)dictionaryWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
