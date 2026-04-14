@class NSMutableArray;

@interface HLCommandProcessor : NSObject

@property (copy, nonatomic) id /* block */ writer;
@property (copy, nonatomic) id /* block */ reader;
@property (retain, nonatomic) NSMutableArray *commands;
@property (nonatomic) BOOL debugMode;

- (void)execute;
- (void).cxx_destruct;
- (void)processIncomingData:(const char *)a0 length:(unsigned long long)a1;
- (void)_flushCommands;
- (void)addCommandWithName:(id)a0 packet:(id)a1 handler:(id /* block */)a2 dump:(BOOL)a3;
- (id)initWithWriter:(id /* block */)a0 reader:(id /* block */)a1;

@end
