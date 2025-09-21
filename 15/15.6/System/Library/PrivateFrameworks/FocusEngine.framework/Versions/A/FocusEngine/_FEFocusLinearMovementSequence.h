@class NSArray;

@interface _FEFocusLinearMovementSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isLooping) char looping;
@property (readonly, nonatomic, getter=restrictsEnteringSequence) char restrictEnteringSequence;

+ (id)sequenceWithItems:(id)a0 loops:(char)a1;
+ (id)sequenceWithItems:(id)a0 loops:(char)a1 restrictEnteringSequence:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 loops:(char)a1;
- (id)initWithItems:(id)a0 loops:(char)a1 restrictEnteringSequence:(char)a2;

@end
