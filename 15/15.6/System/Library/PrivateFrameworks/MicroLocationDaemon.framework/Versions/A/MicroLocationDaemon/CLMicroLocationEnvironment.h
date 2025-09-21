@interface CLMicroLocationEnvironment : NSObject {
    char _isTestingEnvironment;
}

@property (readonly, nonatomic) char isTestingEnvironment;

+ (id)shared;

- (id)init;
- (void)setIsTestingEnvironment:(char)a0;

@end
