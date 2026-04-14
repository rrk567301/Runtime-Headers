@class ADMARDConfig;

@interface CP_RemoteManagementSupport : NSObject {
    ADMARDConfig *_ardConfig;
}

- (void)dealloc;
- (id)init;
- (id)enableRemoteManagement;
- (id)enableRemoteManagement:(BOOL)a0 withPrivileges:(int)a1;
- (id)disableRemoteManagement;
- (BOOL)isARDActive;
- (BOOL)isScreenShareActive;
- (int)getCurrentAllUsersRMPrivs;
- (void)setCurrentAllUsersRMPrivs:(int)a0;
- (BOOL)isAllUsers;
- (id)ardConfig;

@end
