@interface MKTransitSectionPagingFilter : NSObject

@property (nonatomic) BOOL limitNumLines;
@property (nonatomic) unsigned long long numLinesFallbackThreshold;
@property (nonatomic) unsigned long long numLinesFallbackValue;

+ (BOOL)_newStationCardUIEnabled;
+ (id)defaultFilterForInactiveLines;
+ (id)defaultFilterForDepartures;
+ (unsigned long long)_kMaxLinesInSectionBeforePage;
+ (unsigned long long)_kNumLinesFallbackValue;

@end
