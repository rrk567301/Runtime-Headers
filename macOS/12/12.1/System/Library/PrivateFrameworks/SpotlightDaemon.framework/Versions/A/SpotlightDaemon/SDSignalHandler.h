@interface SDSignalHandler : NSObject

+ (void)addSignalHandler;
+ (void)addMemoryHandler;
+ (void)setDelegate:(id)a0 memoryStatusFlags:(unsigned long long)a1;
+ (void)setupHandlers;

@end
