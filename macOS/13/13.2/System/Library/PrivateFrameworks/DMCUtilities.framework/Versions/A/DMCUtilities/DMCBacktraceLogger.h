@interface DMCBacktraceLogger : NSObject

@property (nonatomic) unsigned int trackedThread;

+ (id)callerOfCurrentMethod;
+ (BOOL)dumpStackshotToPath:(id)a0 fileName:(id)a1;

- (void)trackCurrentThread;
- (id)getBacktraceFromTrackedThread;

@end
