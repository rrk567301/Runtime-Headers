@class NSArray;

@interface PIInpaintAdjustmentDelta : NSObject

@property (copy, nonatomic) NSArray *operations;
@property (copy, nonatomic) NSArray *masks;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithOperations:(id)a0 masks:(id)a1;
- (id)redactedCopy;

@end
