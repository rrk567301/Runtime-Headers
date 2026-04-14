@class NSDate;

@interface PXForYouSampleGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (nonatomic) unsigned long long sampleGadgetType;
@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL hasLoadedData;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

+ (id)defaultForYouSampleGadgetProviders;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)initWithSampleGadgetType:(unsigned long long)a0;
- (id)initWithSampleGadgetType:(unsigned long long)a0 minimumHeight:(double)a1;
- (void)loadDataForGadgets;

@end
