@class NSView;

@interface NSStoryboardEmbedSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (retain) NSView *containerView;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
