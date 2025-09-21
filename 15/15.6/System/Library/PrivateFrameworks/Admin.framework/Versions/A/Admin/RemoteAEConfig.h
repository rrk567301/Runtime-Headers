@interface RemoteAEConfig : NSObject

+ (id)sharedRemoteAEConfig;

- (char)boolFromCFValueForKey:(struct __CFString { } *)a0;
- (char)hasCompatibleUserPassword;
- (char)isCompatibleUserEnabled;
- (char)isRemoteAppleEventsEnabled;
- (id)passwordDataForString:(id)a0;
- (void)setRemoteAppleEventsEnabled:(char)a0;

@end
