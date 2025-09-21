@class NSString;

@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSString *identifierString;

+ (char)supportsSecureCoding;
+ (id)namespace;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (char)isAuthenticated;
- (id)initWithIdentifierString:(id)a0;

@end
