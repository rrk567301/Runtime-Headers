@class NSString, TUHandle;

@interface TUConversationActivityAdvertisement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionUUID;
@property (readonly, copy, nonatomic) NSString *contactID;
@property (readonly, copy, nonatomic) TUHandle *handle;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0 contactID:(id)a1 handle:(id)a2;

@end
