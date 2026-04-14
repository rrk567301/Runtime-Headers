@interface VUIMultiviewConfig : NSObject

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL useExperienceController;
@property (nonatomic) BOOL sendPlayableIdToUTS;
@property (nonatomic) long long maximumPlayerCount;

- (id)init;

@end
