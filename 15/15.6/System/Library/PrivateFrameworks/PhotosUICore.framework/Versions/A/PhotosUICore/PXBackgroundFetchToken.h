@interface PXBackgroundFetchToken : NSObject {
    char _finished;
}

- (void)dealloc;
- (id)init;
- (void)finish;

@end
