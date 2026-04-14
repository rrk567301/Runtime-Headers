@interface FPLoggerScope : NSObject {
    unsigned long long section;
}

- (id)enter;
- (id)leave;
- (id)init;
- (id)adopt;
- (id)fork;

@end
