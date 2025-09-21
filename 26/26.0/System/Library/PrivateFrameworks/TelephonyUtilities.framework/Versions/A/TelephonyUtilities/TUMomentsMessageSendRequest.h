@class NSUUID, TUHandle, NSSet;

@interface TUMomentsMessageSendRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, copy, nonatomic) NSUUID *conversationID;
@property (readonly, copy, nonatomic) TUHandle *senderHandle;
@property (readonly, copy, nonatomic) NSSet *destinationHandles;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionUUID:(id)a0 conversationID:(id)a1 senderHandle:(id)a2 destinationHandles:(id)a3;

@end
