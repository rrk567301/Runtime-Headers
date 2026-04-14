@interface ISS_DMDAVPut : ISS_DAVRequest

+ (id)putRequestWithSession:(id)a0 data:(id)a1 URI:(id)a2 includeRangeHeader:(BOOL)a3 rangeStart:(unsigned long long)a4 rangeEnd:(unsigned long long)a5 token:(id)a6;
+ (id)putRequestWithSession:(id)a0 file:(id)a1 URI:(id)a2 token:(id)a3;

- (void)finalizeOperation;
- (id)initPutWithSession:(id)a0 data:(id)a1 URI:(id)a2 includeRangeHeader:(BOOL)a3 rangeStart:(unsigned long long)a4 rangeEnd:(unsigned long long)a5 token:(id)a6;

@end
