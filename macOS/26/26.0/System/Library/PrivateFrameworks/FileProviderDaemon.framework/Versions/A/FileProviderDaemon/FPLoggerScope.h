@interface FPLoggerScope : NSObject {
    unsigned long long section;
}

- (id)enter;
- (id)init;
- (id)leave;
- (id)adopt;
- (id)fork;

@end
