@class NSString;

@interface CalTruthFileRemove : NSObject <CalTruthFileMethod> {
    BOOL _isDirectory;
    NSString *_path;
}

+ (id)methodWithPath:(id)a0 isDirectory:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithPath:(id)a0 isDirectory:(BOOL)a1;

@end
