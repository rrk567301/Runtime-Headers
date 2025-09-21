@interface TITextCheckerExemptions : NSObject {
    char _assertsObservers;
}

@property (nonatomic) char assertsObservers;

- (void)dealloc;
- (char)stringIsExemptFromChecker:(id)a0;

@end
