@class NSNumber;

@interface MTRModeSelectClusterSemanticTag : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mfgCode;
@property (copy, nonatomic) NSNumber *value;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
