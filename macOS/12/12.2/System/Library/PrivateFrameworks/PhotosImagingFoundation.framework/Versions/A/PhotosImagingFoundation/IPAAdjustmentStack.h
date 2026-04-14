@class NSArray, IPAAdjustmentVersionInfo;

@interface IPAAdjustmentStack : NSObject <NSCopying>

@property (copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo;
@property (copy, nonatomic) NSArray *adjustments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)minimumVersionForFormat:(id)a0;
- (id)_debugDescriptionSuffix;
- (BOOL)isEqualToAdjustmentStack:(id)a0;

@end
