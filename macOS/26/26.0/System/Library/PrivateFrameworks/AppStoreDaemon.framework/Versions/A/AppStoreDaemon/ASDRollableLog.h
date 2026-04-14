@class ASDLogFileOptions;

@interface ASDRollableLog : NSObject

@property (readonly) ASDLogFileOptions *logOptions;

- (id)initWithLogOptions:(id)a0;
- (void)writeString:(id)a0;
- (void).cxx_destruct;

@end
