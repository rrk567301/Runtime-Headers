@class NSString, VMUClassPatternMatcher, VMUDebugTimer;

@interface VMUHeapAndVMAggregatorOptions : NSObject

@property (nonatomic) int scope;
@property (nonatomic) char separateByZone;
@property (nonatomic) char showZoneSummaries;
@property (nonatomic) char showZoneHistograms;
@property (nonatomic) char guessNonObjects;
@property (nonatomic) char sumObjectFields;
@property (nonatomic) char showSizes;
@property (nonatomic) char showRawClassNames;
@property (retain, nonatomic) VMUClassPatternMatcher *classesPatternMatcher;
@property (retain, nonatomic) VMUClassPatternMatcher *classFilterPatternMatcher;
@property (retain, nonatomic) NSString *classesPattern;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;

- (id)init;
- (void).cxx_destruct;

@end
