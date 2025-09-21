@class HMDAccountHandle;

@interface _HMDAccountHandleIdentifier : _HMDAccountIdentifier

@property (readonly, copy) HMDAccountHandle *accountHandle;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (id)initWithAccountHandle:(id)a0;

@end
