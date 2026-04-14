@class NSDictionary;

@interface LAExtendedRequirement : NSObject <LAACLSerializable> {
    NSDictionary *_constraint;
}

@property (class, readonly) LAExtendedRequirement *applicationRemainsForegroundRequirement;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)encodeWithACLCoder:(id)a0;

@end
