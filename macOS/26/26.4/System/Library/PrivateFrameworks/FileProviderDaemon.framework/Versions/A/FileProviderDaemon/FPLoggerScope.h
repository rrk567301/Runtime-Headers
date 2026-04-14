@interface FPLoggerScope : NSObject {
    unsigned long long section;
}

- (id)leave;
- (id)init;
- (id)enter;
- (id)adopt;
- (id)fork;

@end
