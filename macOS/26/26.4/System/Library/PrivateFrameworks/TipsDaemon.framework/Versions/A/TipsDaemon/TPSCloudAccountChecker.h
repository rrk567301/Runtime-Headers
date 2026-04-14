@interface TPSCloudAccountChecker : NSObject

+ (id)sharedAccountStore;
+ (BOOL)isiCloudAccountEnabled;
+ (BOOL)isiCloudDataClassEnabled:(id)a0;
+ (BOOL)isiCloudPlusEnabled;

@end
