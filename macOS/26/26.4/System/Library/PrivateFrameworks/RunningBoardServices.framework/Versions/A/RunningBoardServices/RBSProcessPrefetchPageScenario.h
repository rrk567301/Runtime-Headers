@class NSString;

@interface RBSProcessPrefetchPageScenario : NSObject <RBSXPCSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long scenario;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)initWithScenario:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithScenario:(unsigned long long)a0;

@end
