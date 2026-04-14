@class ADMARDConfig;

@interface CP_RemoteManagementSupport : NSObject {
    ADMARDConfig *_ardConfig;
}

- (void)dealloc;
- (id)init;
- (id)enableRemoteManagement;
- (id)disableRemoteManagement;
- (BOOL)isARDActive;
- (BOOL)isScreenShareActive;
- (id)enableRemoteManagement:(BOOL)a0 withPrivileges:(int)a1;
- (int)getCurrentAllUsersRMPrivs;
- (void)setCurrentAllUsersRMPrivs:(int)a0;
- (id)ardConfig;
- (BOOL)isAllUsers;

@end
