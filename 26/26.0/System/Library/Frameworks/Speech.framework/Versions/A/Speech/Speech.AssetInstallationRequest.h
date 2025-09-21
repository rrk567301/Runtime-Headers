@class NSProgress;

@interface Speech.AssetInstallationRequest : NSObject <NSProgressReporting> {
    void /* unknown type, empty encoding */ request;
}

@property (nonatomic, readonly) NSProgress *progress;

- (id)init;
- (void).cxx_destruct;

@end
