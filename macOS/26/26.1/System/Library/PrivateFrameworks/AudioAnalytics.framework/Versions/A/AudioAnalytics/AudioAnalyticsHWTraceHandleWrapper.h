@interface AudioAnalyticsHWTraceHandleWrapper : NSObject

@property (nonatomic) void **handle;

- (id)initWithSessionID:(unsigned int)a0;
- (BOOL)pause;
- (void)dealloc;

@end
