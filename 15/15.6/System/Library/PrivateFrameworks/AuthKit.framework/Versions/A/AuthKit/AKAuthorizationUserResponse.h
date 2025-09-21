@class AKAuthorizationScopesUserSelection, NSString, NSNumber, AKAuthorizationLoginChoice;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> selectedRequest;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (retain, nonatomic) NSNumber *loginChoiceIndex;
@property (retain, nonatomic) AKAuthorizationLoginChoice *loginChoice;
@property (copy, nonatomic) NSString *rawAccountPassword;
@property (nonatomic) char requestParentalPermission;
@property (readonly, nonatomic) char hasSelectedSharedAccountForLogin;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
