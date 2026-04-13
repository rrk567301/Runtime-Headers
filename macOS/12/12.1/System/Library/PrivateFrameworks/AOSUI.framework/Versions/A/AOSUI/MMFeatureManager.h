@interface MMFeatureManager : NSObject

@property (readonly, nonatomic) BOOL isModernWebKitEnabled;

+ (id)sharedManager;

@end
