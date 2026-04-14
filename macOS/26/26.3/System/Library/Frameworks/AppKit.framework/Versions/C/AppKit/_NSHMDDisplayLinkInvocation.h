@interface _NSHMDDisplayLinkInvocation : NSHMDDisplayLinkInvocation {
    double _timestamp;
    double _duration;
}

- (double)duration;
- (id)init;
- (double)timestamp;
- (id)initWithTimestamp:(double)a0 duration:(double)a1;

@end
