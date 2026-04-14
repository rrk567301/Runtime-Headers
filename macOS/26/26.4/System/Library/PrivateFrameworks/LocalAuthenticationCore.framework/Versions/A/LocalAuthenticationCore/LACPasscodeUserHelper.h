@protocol LACKeyBagProvider;

@interface LACPasscodeUserHelper : NSObject {
    id<LACKeyBagProvider> _keybagProvider;
}

- (id)currentUser;
- (id)userNameFromUID:(id)a0;
- (void).cxx_destruct;
- (id)deviceOwners;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (id)findUserWithUID:(id)a0;
- (id)initWithKeybagProvider:(id)a0;
- (id)nonHiddenDeviceOwners;
- (id)userUUIDFromUID:(id)a0;

@end
