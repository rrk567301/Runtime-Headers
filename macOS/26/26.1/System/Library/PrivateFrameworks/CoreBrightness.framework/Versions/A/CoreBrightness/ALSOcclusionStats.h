@interface ALSOcclusionStats : NSObject {
    long long _prox;
    long long _touch;
    long long _touchAndProx;
    long long _none;
}

- (void)submit;
- (void)reset;
- (id)init;
- (void)recordOcclusionByProx:(BOOL)a0 andByTouch:(BOOL)a1;

@end
