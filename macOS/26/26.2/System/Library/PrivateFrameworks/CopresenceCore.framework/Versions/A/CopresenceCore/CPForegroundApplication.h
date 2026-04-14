@class NSString;

@interface CPForegroundApplication : NSObject {
    void /* function */ bundleIdentifier;
    void /* unknown type, empty encoding */ featureFlags;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long applicationType;
@property (nonatomic, readonly) NSString *localizedApplicationName;
@property (nonatomic, readonly) BOOL isGameCenterApplication;

- (void).cxx_destruct;
- (id)init;

@end
