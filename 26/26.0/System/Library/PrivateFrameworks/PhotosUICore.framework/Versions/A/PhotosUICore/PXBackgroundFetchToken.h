@interface PXBackgroundFetchToken : NSObject {
    BOOL _finished;
}

- (void)dealloc;
- (void)finish;
- (id)init;

@end
