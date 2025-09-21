@interface CPInterval : NSObject {
    double left;
    double right;
}

- (void)add:(id)a0;
- (double)left;
- (double)right;
- (char)contains:(id)a0;
- (id)initLeft:(double)a0 right:(double)a1;
- (char)intersects:(id)a0;

@end
