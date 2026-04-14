@interface PFCopyOnWriteHolder : NSObject {
    int _interestCount;
}

@property (readonly, nonatomic) id object;

- (id)description;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)beginInterest;
- (void)endInterest;
- (BOOL)hasMultipleInterests;

@end
