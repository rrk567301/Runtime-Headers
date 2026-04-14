@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;

@end
