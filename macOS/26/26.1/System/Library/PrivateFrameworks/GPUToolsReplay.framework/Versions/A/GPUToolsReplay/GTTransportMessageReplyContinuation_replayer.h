@interface GTTransportMessageReplyContinuation_replayer : GTContinuation_replayer {
    unsigned long long timeout;
    unsigned int replyCount;
}

- (void)dispatchError:(id)a0;

@end
