@class NSString;

@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifierString:(id)a0;
- (BOOL)isAuthenticated;
- (id)kind;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
