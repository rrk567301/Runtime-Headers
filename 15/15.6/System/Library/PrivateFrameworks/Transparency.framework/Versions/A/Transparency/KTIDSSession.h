@class NSString, NSSet, KTAccountPublicID, NSDate, NSData;

@interface KTIDSSession : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDate *sessionExpire;
@property (retain) NSString *sessionID;
@property (retain) NSString *peerHandle;
@property (retain) NSSet *expectedPeerHandles;
@property (retain) NSString *contactIdentifier;
@property (retain) NSString *state;
@property char peerDisconnected;
@property (retain) KTAccountPublicID *peerAccountIdentity;
@property (retain) NSString *sasCode;
@property (readonly, retain) NSData *jsonObject;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)markAsVerified:(id *)a0;
- (char)markContactAsVerified:(id)a0 error:(id *)a1;

@end
