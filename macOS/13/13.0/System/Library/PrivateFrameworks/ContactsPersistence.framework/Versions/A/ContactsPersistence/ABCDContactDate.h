@interface ABCDContactDate : ABCDOwnedObject

- (id)date;
- (void)setDate:(id)a0;
- (void)willRefresh:(BOOL)a0;
- (id)cacheKey;
- (id)dateComponents;
- (id)normalizedDate;
- (void)setNormalizedDate:(id)a0;
- (void)setDateComponents:(id)a0;
- (void)setDateYearless:(id)a0;
- (double)dateYearless;
- (void)setDateYear:(id)a0;
- (long long)dateYear;

@end
