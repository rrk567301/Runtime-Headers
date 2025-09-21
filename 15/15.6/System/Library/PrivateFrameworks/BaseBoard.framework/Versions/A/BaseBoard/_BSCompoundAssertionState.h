@class NSSet, NSOrderedSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {
    char _active;
    NSOrderedSet *_context;
}

@property (readonly, getter=isActive) char active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;

- (id)description;
- (void).cxx_destruct;

@end
