@class NSString, NSBundle;

@interface OldIMInputSource : InputSource {
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (id)bundle;
- (void).cxx_destruct;
- (id)bundleID;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

@end
