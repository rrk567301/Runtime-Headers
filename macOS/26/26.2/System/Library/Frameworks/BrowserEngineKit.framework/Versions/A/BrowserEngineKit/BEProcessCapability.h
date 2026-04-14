@interface BEProcessCapability : NSObject {
    void /* unknown type, empty encoding */ inner;
}

+ (id)background;
+ (id)foreground;
+ (id)suspended;
+ (id)mediaPlaybackAndCaptureWithEnvironment:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)requestWithError:(id *)a0;

@end
