@interface ADMRemoteAEConfig : NSObject

+ (id)sharedRemoteAEConfig;

- (BOOL)boolFromCFValueForKey:(struct __CFString { } *)a0;
- (id)passwordDataForString:(id)a0;
- (void)setRemoteAppleEventsEnabled:(BOOL)a0;
- (BOOL)isRemoteAppleEventsEnabled;
- (BOOL)isCompatibleUserEnabled;
- (BOOL)hasCompatibleUserPassword;

@end
