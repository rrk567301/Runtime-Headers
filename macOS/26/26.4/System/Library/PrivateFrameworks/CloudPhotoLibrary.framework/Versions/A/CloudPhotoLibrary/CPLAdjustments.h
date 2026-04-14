@class NSString, CPLResource, NSData, NSDate;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *creatorCode;
@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (copy, nonatomic) NSDate *adjustmentTimestamp;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (retain, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (nonatomic) unsigned long long adjustmentRenderTypes;
@property (retain, nonatomic) CPLResource *adjustmentData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)adjustmentSimpleDescription;

@end
