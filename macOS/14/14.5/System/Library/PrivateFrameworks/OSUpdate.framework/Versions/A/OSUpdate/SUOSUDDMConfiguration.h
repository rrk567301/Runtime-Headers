@class SUCorePolicyDDMConfiguration;

@interface SUOSUDDMConfiguration : NSObject

@property (retain) SUCorePolicyDDMConfiguration *ddmConfiguration;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
