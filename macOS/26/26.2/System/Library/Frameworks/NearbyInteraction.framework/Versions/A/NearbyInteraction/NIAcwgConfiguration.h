@class NSString, NSDictionary;

@interface NIAcwgConfiguration : NIConfiguration {
    long long _configurationTypeInternal;
}

@property (readonly) long long configurationType;
@property (copy) NSString *lockIdentifier;
@property unsigned short lockBtConnHandle;
@property (copy) NSDictionary *debugOptions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (id)initWithLockIdentifier:(id)a0;

@end
