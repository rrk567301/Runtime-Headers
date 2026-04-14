@class NSMutableDictionary;

@interface WBSAppLinkEphemeralDisabler : NSObject {
    NSMutableDictionary *_appLinks;
}

+ (id)defaultDisabler;

- (void).cxx_destruct;
- (id)init;
- (void)disableAppLink:(id)a0;
- (BOOL)shouldDisableAppLink:(id)a0;

@end
