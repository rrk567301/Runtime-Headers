@class NSArray, IPAAdjustmentVersionInfo;

@interface IPAAdjustmentStack : NSObject <NSCopying>

@property (copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo;
@property (copy, nonatomic) NSArray *adjustments;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)_debugDescriptionSuffix;
- (BOOL)isEqualToAdjustmentStack:(id)a0;
- (id)minimumVersionForFormat:(id)a0;

@end
