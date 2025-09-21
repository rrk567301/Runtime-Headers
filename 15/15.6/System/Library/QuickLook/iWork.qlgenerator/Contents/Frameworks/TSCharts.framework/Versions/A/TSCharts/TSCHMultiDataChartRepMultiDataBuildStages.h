@class TSCHMultiDataChartRep;

@interface TSCHMultiDataChartRepMultiDataBuildStages : NSObject {
    TSCHMultiDataChartRep *_rep;
    struct _NSRange { unsigned long long location; unsigned long long length; } _stages;
    double _totalDuration;
}

@property (class, readonly, nonatomic) unsigned long long numberOfFadingBuildStages;

@property (readonly, nonatomic) unsigned long long currentStage;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) char isFadingInLayers;
@property (readonly, nonatomic) char isBackgroundOnly;
@property (readonly, nonatomic) char isLastStageBackgroundOnly;
@property (readonly, nonatomic) char hasStage;

+ (id)buildStagesWithRep:(id)a0 stages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 totalDuration:(double)a2;
+ (unsigned long long)dataSetIndexForRep:(id)a0 buildStage:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)advanceStage;
- (id)chartLayout;
- (unsigned long long)dataSetIndexForStage:(unsigned long long)a0;
- (id)initWithRep:(id)a0 stages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 totalDuration:(double)a2;
- (char)isBackgroundOnlyStage:(unsigned long long)a0;
- (void)setupLayoutDataSetIndexForCurrentStage;
- (void)setupLayoutDataSetIndexForNextStage;

@end
