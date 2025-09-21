@class NSArray, NSString, NSUUID, NSDate, NSNumber, HMDUser;

@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSArray *operationIdentifiers;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSString *accessCode;
@property (retain, nonatomic) NSUUID *pendingUserUUID;
@property (retain, nonatomic) NSString *inviteeDestinationAddress;
@property (readonly, nonatomic) NSArray *accessoryInvitationsInformation;
@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMDUser *user;
@property (readonly, nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic) char responseReceived;
@property (readonly, nonatomic) NSUUID *messageIdentifier;
@property (retain, nonatomic) NSArray *uuidsOfAllowedAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (char)shouldRetrySendingInvitationForError:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (id)shortDescription;
- (id)emptyModelObjectWithChangeType:(unsigned long long)a0;
- (void)_transactionOutgoingInvitationUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)describeWithFormat;
- (id)initWithInvitee:(id)a0 invitationState:(long long)a1 forHome:(id)a2 expiryDate:(id)a3 messageIdentifier:(id)a4;
- (id)initWithUUID:(id)a0 invitee:(id)a1 invitationState:(long long)a2 forHome:(id)a3 expiryDate:(id)a4 messageIdentifier:(id)a5;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)notifyStateChangedForMessage:(id)a0;
- (char)refreshDisplayName;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)updateInvitationState:(long long)a0;
- (void)updateUser:(id)a0;

@end
