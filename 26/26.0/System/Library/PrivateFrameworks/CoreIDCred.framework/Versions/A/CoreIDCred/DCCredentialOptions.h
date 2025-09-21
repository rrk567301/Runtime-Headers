@interface DCCredentialOptions : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _deleteInactiveKeysAfterDays;
    long long _deleteIncompleteCredentialAfterDays;
    unsigned long long _readerAuthenticationPolicy;
    unsigned long long _presentmentAuthPolicy;
    unsigned long long _payloadProtectionPolicy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long presentmentAuthPolicy;
@property (nonatomic) unsigned long long payloadProtectionPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
