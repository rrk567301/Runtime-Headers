@class NSString;

@interface EFFileLogger : NSObject

@property (retain, nonatomic) NSString *filename;

+ (BOOL)enabled;

- (void).cxx_destruct;
- (void)logSnippet:(id)a0;
- (void)_ensureCustomLogFileInDirectory:(id)a0;
- (id)initWithFilename:(id)a0 directory:(id)a1;
- (void)slurpAndRemoveLookasideFile:(id)a0 prefixString:(id)a1 suffixString:(id)a2;

@end
