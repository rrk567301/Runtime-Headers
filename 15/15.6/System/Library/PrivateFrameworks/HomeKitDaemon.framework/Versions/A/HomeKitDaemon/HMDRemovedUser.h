@class HMDUser, NSString, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSString *mergeID;
@property (getter=isRemovalInProgress) char removalInProgress;

+ (id)removedUserWithUser:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isExpired;
- (char)isEqualToUser:(id)a0;
- (char)isEqualToUserID:(id)a0;
- (id)initWithUser:(id)a0 expiration:(id)a1;

@end
