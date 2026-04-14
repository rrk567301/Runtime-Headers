@interface AudioAnalyticsHWTraceHandleWrapper : NSObject

@property (nonatomic) void **handle;

- (BOOL)pause;
- (id)initWithSessionID:(unsigned int)a0;
- (void)dealloc;

@end
