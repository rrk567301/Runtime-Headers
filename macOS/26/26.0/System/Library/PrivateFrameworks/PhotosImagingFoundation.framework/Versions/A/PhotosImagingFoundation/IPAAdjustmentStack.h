@class NSArray, IPAAdjustmentVersionInfo;

@interface IPAAdjustmentStack : NSObject <NSCopying>

@property (copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo;
@property (copy, nonatomic) NSArray *adjustments;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (BOOL)isEqualToAdjustmentStack:(id)a0;
- (id)minimumVersionForFormat:(id)a0;

@end
