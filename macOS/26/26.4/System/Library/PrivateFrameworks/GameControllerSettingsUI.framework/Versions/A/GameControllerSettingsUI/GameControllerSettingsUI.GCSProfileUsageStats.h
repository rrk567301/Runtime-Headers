@class NSString, NSSet;

@interface GameControllerSettingsUI.GCSProfileUsageStats : NSObject {
    void /* function */ controllerIdentifiers;
    void /* function */ gameIdentifiers;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSSet *controllerIdentifiers;
@property (nonatomic, copy) NSSet *gameIdentifiers;
@property (nonatomic, readonly) long long controllersCount;
@property (nonatomic, readonly) long long gamesCount;
@property (nonatomic, readonly) BOOL isActive;

- (void).cxx_destruct;
- (id)init;

@end
