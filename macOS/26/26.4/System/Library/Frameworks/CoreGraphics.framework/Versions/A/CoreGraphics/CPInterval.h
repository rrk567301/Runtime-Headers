@interface CPInterval : NSObject {
    double left;
    double right;
}

- (BOOL)intersects:(id)a0;
- (BOOL)contains:(id)a0;
- (double)left;
- (void)add:(id)a0;
- (double)right;
- (id)initLeft:(double)a0 right:(double)a1;

@end
