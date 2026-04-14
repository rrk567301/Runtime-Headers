@class NSMutableDictionary;

@interface WBSAppLinkEphemeralDisabler : NSObject {
    NSMutableDictionary *_appLinks;
}

+ (id)defaultDisabler;

- (id)init;
- (void).cxx_destruct;
- (void)disableAppLink:(id)a0;
- (BOOL)shouldDisableAppLink:(id)a0;

@end
