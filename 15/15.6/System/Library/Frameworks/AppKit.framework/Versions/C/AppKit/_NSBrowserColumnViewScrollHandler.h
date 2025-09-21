@interface _NSBrowserColumnViewScrollHandler : NSObject {
    char _wasLastScrollVertical;
    double _accum;
}

- (void)shouldSendEvent:(id)a0 toSuperview:(char *)a1 toSuperclass:(char *)a2;

@end
