@interface FPLoggerScope : NSObject {
    unsigned long long section;
}

- (id)init;
- (id)leave;
- (id)enter;
- (id)adopt;
- (id)fork;

@end
