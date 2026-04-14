@interface PFCopyOnWriteHolder : NSObject {
    int _interestCount;
}

@property (readonly, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)beginInterest;
- (void)endInterest;
- (BOOL)hasMultipleInterests;

@end
