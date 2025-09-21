@interface _NSHMDDisplayLinkInvocation : NSHMDDisplayLinkInvocation {
    double _timestamp;
    double _duration;
}

- (double)timestamp;
- (id)init;
- (double)duration;
- (id)initWithTimestamp:(double)a0 duration:(double)a1;

@end
