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
- (int)lastProcessingResolution;
- (double)lastExecutionTime;
- (void)appendProcessingResolution:(int)a0 andTime:(double)a1;
- (id)CIImageProcessorDigestObject;
- (int)filterProcessingCount;
- (id)processingResolutionsLog;
- (id)executionTimesLog;

@end
