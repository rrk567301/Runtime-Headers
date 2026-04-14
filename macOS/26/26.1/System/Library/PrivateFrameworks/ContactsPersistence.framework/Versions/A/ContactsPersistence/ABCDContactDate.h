@interface ABCDContactDate : ABCDOwnedObject

- (id)cacheKey;
- (id)dateComponents;
- (id)date;
- (void)setDate:(id)a0;
- (void)willRefresh:(BOOL)a0;
- (long long)dateYear;
- (double)dateYearless;
- (id)normalizedDate;
- (void)setDateComponents:(id)a0;
- (void)setDateYear:(id)a0;
- (void)setDateYearless:(id)a0;
- (void)setNormalizedDate:(id)a0;

@end
