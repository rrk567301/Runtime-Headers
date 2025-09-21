@class NSArray;

@interface IMAPAggregateCommand : IMAPCommand

@property (readonly, copy, nonatomic) NSArray *commands;

- (long long)composition;
- (id)init;
- (void).cxx_destruct;
- (void)cleanupAfterCompletion;
- (id)initWithCommands:(id)a0;

@end
