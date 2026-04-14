@interface AudioAnalyticsHWTraceHandleWrapper : NSObject

@property (nonatomic) void **handle;

- (BOOL)pause;
- (void)dealloc;
- (id)initWithSessionID:(unsigned int)a0;

@end
