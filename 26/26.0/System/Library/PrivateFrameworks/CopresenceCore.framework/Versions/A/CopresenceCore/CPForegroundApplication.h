@class NSString;

@interface CPForegroundApplication : NSObject {
    void /* function */ bundleIdentifier;
    void /* unknown type, empty encoding */ featureFlags;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long applicationType;
@property (nonatomic, readonly) NSString *localizedApplicationName;
@property (nonatomic, readonly) BOOL isGameCenterApplication;

- (id)init;
- (void).cxx_destruct;

@end
