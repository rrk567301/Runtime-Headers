@class NSDate;

@interface SearchUICalendarIconImage : SearchUIAppIconImage

@property (nonatomic) BOOL isCurrentDate;
@property (retain, nonatomic) NSDate *date;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;
- (void)invalidateAppIcon;
- (id)initWithCurrentDateAndVariant:(unsigned long long)a0;
- (id)initWithDate:(id)a0 variant:(unsigned long long)a1;

@end
