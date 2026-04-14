@class HMUser, HMFUnfairLock;

@interface HMAccessControl : NSObject <NSSecureCoding> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cachedHash;
@property (weak) HMUser *user;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;

@end
