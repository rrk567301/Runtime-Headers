@class NSString, NSDictionary;

@interface NIAcwgConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *lockIdentifier;
@property unsigned short lockBtConnHandle;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;

- (id)descriptionInternal;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLockIdentifier:(id)a0;

@end
