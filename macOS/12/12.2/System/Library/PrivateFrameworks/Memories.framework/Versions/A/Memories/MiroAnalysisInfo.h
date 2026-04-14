@class NSArray, NSDate;
@protocol MiroMetadataRangeMergeable;

@interface MiroAnalysisInfo : NSObject

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long performedAnalysisTypes;
@property (nonatomic) long long analysisVersion;
@property (retain, nonatomic) NSDate *performedAnalysisDate;
@property (nonatomic) double qualityScore;
@property (nonatomic) double junkScore;
@property (retain, nonatomic) NSArray<MiroMetadataRangeMergeable> *ranges;

+ (id)analysisInfo;
+ (id)descriptionForAnalysisTypes:(unsigned long long)a0;
+ (id)analysisInfoWithVPAnalysisInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;

@end
