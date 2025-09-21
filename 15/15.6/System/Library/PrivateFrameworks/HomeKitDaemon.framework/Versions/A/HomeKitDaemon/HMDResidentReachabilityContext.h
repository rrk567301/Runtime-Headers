@class NSNumber;

@interface HMDResidentReachabilityContext : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSNumber *mostRecentReachability;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMostRecentReachability:(id)a0;

@end
