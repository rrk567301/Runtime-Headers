@class NSProgress;

@interface Speech.AssetsInstallationRequest : NSObject <NSProgressReporting> {
    void /* unknown type, empty encoding */ assetConfigs;
    void /* unknown type, empty encoding */ clientID;
}

@property (nonatomic, readonly) NSProgress *progress;

- (id)init;
- (void).cxx_destruct;

@end
