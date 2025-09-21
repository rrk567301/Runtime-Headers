@interface __NSCFDeallocBomb : NSObject {
    id object;
    SEL method;
    char disarmed;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
