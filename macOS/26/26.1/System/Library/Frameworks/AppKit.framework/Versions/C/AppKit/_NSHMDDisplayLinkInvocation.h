@interface _NSHMDDisplayLinkInvocation : NSHMDDisplayLinkInvocation {
    double _timestamp;
    double _duration;
}

- (double)duration;
- (double)timestamp;
- (id)init;
- (id)initWithTimestamp:(double)a0 duration:(double)a1;

@end
