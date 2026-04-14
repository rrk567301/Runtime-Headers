@class RTEventHistogramOptions, RTEventLocationIdentifier, NSDictionary;

@interface RTEventHistogram : NSObject {
    RTEventLocationIdentifier *_reusableLookupIdentifier;
    NSDictionary *_locationOfInterestHistograms;
}

@property (retain, nonatomic) RTEventHistogramOptions *options;

+ (double)getOverlapTimeForIntervalStart1:(id)a0 intervalEnd1:(id)a1 intervalStart2:(id)a2 intervalEnd2:(id)a3;
+ (BOOL)highProbabilityHistogramItem:(id)a0 withOptions:(id)a1;
+ (BOOL)relativeHighProbabilityHistogramItem:(id)a0 toItem:(id)a1 withOptions:(id)a2;

- (void).cxx_destruct;
- (id)getRawHistogram;
- (id)_loiHistogramForEventLocation:(id)a0;
- (void)addEvent:(id)a0 toIdentifierDict:(id)a1 useCalendarIdentifier:(BOOL)a2;
- (id)getLOIHistogramForEvents:(id)a0 andLocationsOfInterest:(id)a1;
- (id)getObjectWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2 fromDictionary:(id)a3;
- (id)initWithDictionary:(id)a0 options:(id)a1;
- (id)initWithEvents:(id)a0 locationsOfInterest:(id)a1 options:(id)a2;
- (id)locationsOfInterestAssociatedToIdentifier:(id)a0;
- (id)predictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2;

@end
