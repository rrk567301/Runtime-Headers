@class NSString, AMSKeychainOptions, LAContext, ACAccount, AMSProcessInfo, NSDictionary;
@protocol AMSBagProtocol;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly, copy) NSString *challenge;
@property (readonly, copy) AMSProcessInfo *clientInfo;
@property (getter=isDualAction) BOOL dualAction;
@property (readonly) AMSKeychainOptions *keychainOptions;
@property (readonly) struct __SecAccessControl { } *localAuthAccessControlRef;
@property (readonly) LAContext *localAuthContext;
@property (readonly) NSDictionary *localAuthOptions;

+ (id)biometricsSignatureRequestForURLResponse:(id)a0 account:(id)a1 session:(id)a2 task:(id)a3 clientInfo:(id)a4 options:(id)a5 error:(id *)a6;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 challenge:(id)a2 options:(id)a3 error:(id *)a4;
- (id)_localAuthOptions;
- (void)setLocalAuthAccessControlRef:(struct __SecAccessControl { } *)a0;

@end
