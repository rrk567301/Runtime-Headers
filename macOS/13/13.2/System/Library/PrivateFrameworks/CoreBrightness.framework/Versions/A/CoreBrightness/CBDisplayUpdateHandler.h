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
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyOnlineDisplays;
- (id)copyOnlineDisplayAliases;
- (BOOL)getOnlineDisplaysList:(unsigned int *)a0 withMaxDisplays:(unsigned int)a1 andNumberOfDisplays:(unsigned int *)a2;
- (void)wipeCache;
- (void)hardwareChanged;
- (void)configurationChanged;
- (void)reinitializeDisplaySet;
- (unsigned long long)getAliasForDeviceID:(unsigned long long)a0;
- (unsigned long long)getDeviceIDForAlias:(unsigned long long)a0;
- (unsigned long long)getDeviceIDForID:(unsigned long long)a0;

@end
