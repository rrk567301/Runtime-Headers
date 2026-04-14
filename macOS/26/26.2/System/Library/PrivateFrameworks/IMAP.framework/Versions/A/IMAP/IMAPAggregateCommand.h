@class NSArray;

@interface IMAPAggregateCommand : IMAPCommand

@property (readonly, copy, nonatomic) NSArray *commands;

- (long long)composition;
- (void).cxx_destruct;
- (id)init;
- (void)cleanupAfterCompletion;
- (id)initWithCommands:(id)a0;

@end
