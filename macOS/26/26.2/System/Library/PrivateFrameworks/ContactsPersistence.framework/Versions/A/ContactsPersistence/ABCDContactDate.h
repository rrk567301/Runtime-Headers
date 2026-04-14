@interface ABCDContactDate : ABCDOwnedObject

- (id)date;
- (id)dateComponents;
- (id)cacheKey;
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
