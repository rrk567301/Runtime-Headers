@class NSView;

@interface NSStoryboardPopoverSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property NSView *anchorView;
@property long long popoverBehavior;
@property unsigned long long preferredEdge;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
