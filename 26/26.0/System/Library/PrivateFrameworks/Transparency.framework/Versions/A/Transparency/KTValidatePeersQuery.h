@class NSString, NSDictionary;

@interface KTValidatePeersQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSDictionary *uriToVerificationInfo;
@property BOOL fetchNow;
@property (retain) NSString *traceUUID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 peers:(id)a1;

@end
