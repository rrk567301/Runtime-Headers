@interface MMFeatureManager : NSObject {
    BOOL _cachedIsModernWebKitEnabled;
}

@property (readonly, nonatomic) BOOL isModernWebKitEnabled;

+ (id)sharedManager;

- (id)init;

@end
