@interface MKTransitSectionPagingFilter : NSObject

@property (nonatomic) BOOL limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (BOOL)_newStationCardUIEnabled;
+ (id)defaultFilterForDepartures;
+ (id)defaultFilterForInactiveLines;
+ (unsigned long long)_kNumLinesFallbackValue;
+ (unsigned long long)_kMaxLinesInSectionBeforePage;

@end
