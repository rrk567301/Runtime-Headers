@class NSArray, NSObject;
@protocol OS_os_log;

@interface CBDisplayUpdateHandler : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSArray *_onlineDisplays;
    NSArray *_onlineDisplayAliases;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)handler;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (unsigned long long)getAliasForDeviceID:(unsigned long long)a0;
- (id)copyOnlineDisplays;
- (BOOL)getOnlineDisplaysList:(unsigned int *)a0 withMaxDisplays:(unsigned int)a1 andNumberOfDisplays:(unsigned int *)a2;
- (void)reinitializeDisplaySet;
- (id)copyOnlineDisplayAliases;
- (void)wipeCache;
- (void)hardwareChanged;
- (void)configurationChanged;
- (unsigned long long)getDeviceIDForAlias:(unsigned long long)a0;
- (unsigned long long)getDeviceIDForID:(unsigned long long)a0;

@end
