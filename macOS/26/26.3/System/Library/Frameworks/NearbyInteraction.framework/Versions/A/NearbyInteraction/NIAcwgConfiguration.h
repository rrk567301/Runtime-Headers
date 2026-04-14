@class NSString, NSDictionary;

@interface NIAcwgConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *lockIdentifier;
@property unsigned short lockBtConnHandle;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;

- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithLockIdentifier:(id)a0;

@end
