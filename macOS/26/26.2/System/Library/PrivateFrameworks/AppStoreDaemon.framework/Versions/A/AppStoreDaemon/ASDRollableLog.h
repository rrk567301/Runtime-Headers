@class ASDLogFileOptions;

@interface ASDRollableLog : NSObject

@property (readonly) ASDLogFileOptions *logOptions;

- (void)writeString:(id)a0;
- (id)initWithLogOptions:(id)a0;
- (void).cxx_destruct;

@end
