@interface BEProcessCapability : NSObject {
    void /* unknown type, empty encoding */ inner;
}

+ (id)background;
+ (id)suspended;
+ (id)foreground;
+ (id)mediaPlaybackAndCaptureWithEnvironment:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)requestWithError:(id *)a0;

@end
