@class NSArray, NSObject;
@protocol OS_os_log;

@interface CBDisplayUpdateHandler : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSArray *_onlineDisplays;
    NSArray *_onlineDisplayAliases;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)handler;

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)init;
- (void)hardwareChanged;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)configurationChanged;
- (id)copyOnlineDisplayAliases;
- (id)copyOnlineDisplays;
- (unsigned long long)getAliasForDeviceID:(unsigned long long)a0;
- (unsigned long long)getDeviceIDForAlias:(unsigned long long)a0;
- (unsigned long long)getDeviceIDForID:(unsigned long long)a0;
- (BOOL)getOnlineDisplaysList:(unsigned int *)a0 withMaxDisplays:(unsigned int)a1 andNumberOfDisplays:(unsigned int *)a2;
- (void)reinitializeDisplaySet;
- (void)wipeCache;

@end
