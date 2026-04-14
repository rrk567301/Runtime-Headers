@class SearchUICommandHandler;

@interface SearchUIMenuItem : NSMenuItem

@property (retain, nonatomic) SearchUICommandHandler *commandHandler;

- (void).cxx_destruct;
- (void)performNSMenuCommandButtonItem:(id)a0;
- (id)initWithHandler:(id)a0 title:(id)a1 keyEquivalent:(id)a2;

@end
