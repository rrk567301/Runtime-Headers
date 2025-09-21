@class NSString, NSSet, KTAccountPublicID, NSDate, NSData;

@interface KTIDSSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *sessionExpire;
@property (retain) NSString *sessionID;
@property (retain) NSString *peerHandle;
@property (retain) NSSet *expectedPeerHandles;
@property (retain) NSString *contactIdentifier;
@property (retain) NSString *state;
@property BOOL peerDisconnected;
@property (retain) KTAccountPublicID *peerAccountIdentity;
@property (retain) NSString *sasCode;
@property (readonly, retain) NSData *jsonObject;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)markAsVerified:(id *)a0;
- (BOOL)markContactAsVerified:(id)a0 error:(id *)a1;

@end
