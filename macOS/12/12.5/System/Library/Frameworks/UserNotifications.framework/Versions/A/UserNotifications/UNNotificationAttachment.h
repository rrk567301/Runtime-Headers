@class UNSecurityScopedURL, NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding> {
    UNSecurityScopedURL *_securityScopedURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _securityScopeLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long family;
@property (readonly, copy, nonatomic) UNNotificationAttachmentOptions *options;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentWithIdentifier:(id)a0 URL:(id)a1 options:(id)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)family;
- (void)addSecurityScope:(id)a0;
- (void)removeSecurityScope;
- (id)initWithIdentifier:(id)a0 URL:(id)a1 type:(id)a2 options:(id)a3;
- (void)enterSecurityScope;
- (void)leaveSecurityScope;
- (void)_withSecurityScopeLock:(id /* block */)a0;
- (id)_encodableURL;
- (id)initWithIdentifier:(id)a0 family:(unsigned long long)a1 URL:(id)a2 type:(id)a3 options:(id)a4;

@end
