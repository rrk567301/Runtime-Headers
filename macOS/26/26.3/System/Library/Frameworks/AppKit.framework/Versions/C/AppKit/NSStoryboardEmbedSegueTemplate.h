@class NSView;

@interface NSStoryboardEmbedSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (retain) NSView *containerView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
