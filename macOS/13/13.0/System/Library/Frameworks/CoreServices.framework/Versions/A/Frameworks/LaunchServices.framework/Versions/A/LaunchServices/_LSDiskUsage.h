@class NSNumber, NSString, NSMutableDictionary;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id _validationToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *staticUsage;
@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;

+ (id)_serverQueue;
+ (id)propertyQueue;

- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)staticUsage;
- (id)dynamicUsage;
- (id)onDemandResourcesUsage;
- (id)sharedUsage;
- (void)removeAllCachedUsageValues;
- (id)_initWithBundleIdentifier:(id)a0 alreadyKnownUsage:(id)a1 validationToken:(id)a2;
- (BOOL)_fetchWithXPCConnection:(id)a0 error:(id *)a1;
- (BOOL)fetchServerSideWithConnection:(id)a0 error:(id *)a1;
- (BOOL)fetchClientSideWithError:(id *)a0;

@end
