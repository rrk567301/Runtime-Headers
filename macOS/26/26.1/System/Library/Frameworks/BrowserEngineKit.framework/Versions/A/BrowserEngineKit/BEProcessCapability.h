@interface BEProcessCapability : NSObject {
    void /* unknown type, empty encoding */ inner;
}

+ (id)background;
+ (id)suspended;
+ (id)foreground;
+ (id)mediaPlaybackAndCaptureWithEnvironment:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)requestWithError:(id *)a0;

@end
