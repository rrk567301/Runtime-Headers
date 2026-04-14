@class NSUUID;

@interface LACMutablePasscodeVerificationRequestExtended : LACMutablePasscodeVerificationRequest <LACPasscodeVerificationRequestExtended> {
    void /* unknown type, empty encoding */ _uuid;
}

@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isAdminUser;
@property (nonatomic, copy) NSUUID *userUUID;

@end
