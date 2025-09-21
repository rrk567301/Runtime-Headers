@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long operation;
@property char invitationsSentViaThirdPartyService;
@property char publicShare;
@property long long numberOfInvitations;
@property (copy) NSString *sharedContentType;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_variantSubstrings;

@end
