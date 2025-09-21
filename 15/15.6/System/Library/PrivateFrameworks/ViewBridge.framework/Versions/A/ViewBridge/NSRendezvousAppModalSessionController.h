@interface NSRendezvousAppModalSessionController : NSSemiAutonomousRendezvousWindowController {
    unsigned int _ending;
}

- (void)invalidate;
- (void)invalidateWhileEnding:(char)a0;

@end
