@class NSView;

@interface NSStoryboardEmbedSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (retain) NSView *containerView;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
