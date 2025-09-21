@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long identifier;
@property (nonatomic) double holdoutAllocation;
@property (nonatomic) long long camp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)updateWithExperimentDictionary:(id)a0;
- (char)updateCampIfNeeded;

@end
