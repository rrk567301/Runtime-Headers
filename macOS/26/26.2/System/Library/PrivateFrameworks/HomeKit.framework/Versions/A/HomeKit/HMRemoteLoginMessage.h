@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSessionID:(id)a0;
- (id)initNewMessage;

@end
