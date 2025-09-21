@class ADMARDConfig;

@interface CP_RemoteManagementSupport : NSObject {
    ADMARDConfig *_ardConfig;
}

- (void)dealloc;
- (id)init;
- (id)ardConfig;
- (id)disableRemoteManagement;
- (id)enableRemoteManagement;
- (id)enableRemoteManagement:(char)a0 withPrivileges:(int)a1;
- (int)getCurrentAllUsersRMPrivs;
- (char)isARDActive;
- (char)isAllUsers;
- (char)isScreenShareActive;
- (void)setCurrentAllUsersRMPrivs:(int)a0;

@end
