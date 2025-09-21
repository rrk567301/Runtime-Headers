@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _sessionEncryptionMode;
    unsigned long long _readerAuthenticationPolicy;
    unsigned long long _elementFallbackModes;
    unsigned long long _messageEncodingFormat;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionEncryptionMode;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long elementFallbackModes;
@property (nonatomic) unsigned long long messageEncodingFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0;
- (id)initWithSessionEncryptionMode:(unsigned long long)a0 readerAuthenticationPolicy:(unsigned long long)a1;

@end
