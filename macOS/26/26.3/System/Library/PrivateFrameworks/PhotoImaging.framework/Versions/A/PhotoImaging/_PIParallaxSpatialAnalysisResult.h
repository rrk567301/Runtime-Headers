@class NSString;
@protocol NURenderStatistics;

@interface _PIParallaxSpatialAnalysisResult : _NURenderResult <PIParallaxSpatialAnalysisResult>

@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
