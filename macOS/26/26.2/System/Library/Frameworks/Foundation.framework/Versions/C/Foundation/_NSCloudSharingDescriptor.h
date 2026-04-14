@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long operation;
@property BOOL invitationsSentViaThirdPartyService;
@property BOOL publicShare;
@property long long numberOfInvitations;
@property (copy) NSString *sharedContentType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)_variantSubstrings;

@end
