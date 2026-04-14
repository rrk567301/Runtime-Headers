@class NSString, NSMutableArray;

@interface InpaintingExecutionContext : NSObject {
    NSMutableArray *processingResolutions;
    NSMutableArray *executionTimes;
}

@property int lastNumberOfTilesUsed;
@property (retain) NSString *lastModelResourceUsed;
@property int lastInpaintingModeUsed;

- (void)dealloc;
- (id)init;
- (id)CIImageProcessorDigestObject;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;
- (id)executionTimesLog;
- (int)filterProcessingCount;
- (double)lastExecutionTime;
- (int)lastProcessingResolution;
- (id)processingResolutionsLog;

@end
