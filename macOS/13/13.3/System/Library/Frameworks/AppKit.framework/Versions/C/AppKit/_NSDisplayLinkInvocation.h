@interface _NSDisplayLinkInvocation : NSDisplayLinkInvocation {
    double _timestamp;
    double _duration;
}

- (id)init;
- (double)duration;
- (double)timestamp;
- (id)initWithTimestamp:(double)a0 duration:(double)a1;

@end
