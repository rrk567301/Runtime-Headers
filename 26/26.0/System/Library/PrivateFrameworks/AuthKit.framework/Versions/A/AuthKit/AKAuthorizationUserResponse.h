@class AKAuthorizationScopesUserSelection, NSString, NSNumber, AKAuthorizationLoginChoice;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> selectedRequest;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (retain, nonatomic) NSNumber *loginChoiceIndex;
@property (retain, nonatomic) AKAuthorizationLoginChoice *loginChoice;
@property (copy, nonatomic) NSString *rawAccountPassword;
@property (nonatomic) BOOL requestParentalPermission;
@property (readonly, nonatomic) BOOL hasSelectedSharedAccountForLogin;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
