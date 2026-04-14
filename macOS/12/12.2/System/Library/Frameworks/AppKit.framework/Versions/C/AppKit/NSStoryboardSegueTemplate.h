@class NSString, NSStoryboard;

@interface NSStoryboardSegueTemplate : NSObject <NSCoding> {
    NSString *_segueClassName;
}

@property NSStoryboard *storyboard;
@property (readonly) NSString *destinationControllerIdentifier;
@property (readonly) NSString *identifier;
@property id controller;
@property BOOL performOnViewLoad;
@property (readonly) NSString *destinationControllerCreationSelectorName;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)effectiveSegueClass;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;
- (id)targetController;
- (id)segueWithDestinationViewController:(id)a0;
- (void)_perform:(id)a0;
- (void)perform:(id)a0;

@end
