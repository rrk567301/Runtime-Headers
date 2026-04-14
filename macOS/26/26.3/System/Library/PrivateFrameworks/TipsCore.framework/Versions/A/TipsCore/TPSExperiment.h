@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long identifier;
@property (nonatomic) double holdoutAllocation;
@property (nonatomic) long long camp;

- (id)debugDescription;
- (BOOL)updateWithExperimentDictionary:(id)a0;
- (id)init;
- (BOOL)updateCampIfNeeded;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
