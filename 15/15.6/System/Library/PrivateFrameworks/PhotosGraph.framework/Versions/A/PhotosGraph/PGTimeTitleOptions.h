@class NSSet, NSLocale, PGGraphYearNodeCollection;

@interface PGTimeTitleOptions : NSObject

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) PGGraphYearNodeCollection *featuredYearNodes;
@property (retain, nonatomic) NSSet *locationNodes;
@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic) char filterDates;
@property (nonatomic) char usePeopleSubtitleFormatWithYears;
@property (nonatomic) char filterForSignificantDateNodes;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;

@end
