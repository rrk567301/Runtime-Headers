@class NSData;

@interface DCCredentialAuthACL : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_aclData;
    unsigned long long _aclType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *aclData;
@property (nonatomic) unsigned long long aclType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(unsigned long long)a1;

@end
