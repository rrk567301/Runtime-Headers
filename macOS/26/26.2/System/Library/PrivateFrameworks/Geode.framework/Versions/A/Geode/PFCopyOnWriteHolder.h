@interface PFCopyOnWriteHolder : NSObject {
    int _interestCount;
}

@property (readonly, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)beginInterest;
- (void)endInterest;
- (BOOL)hasMultipleInterests;

@end
