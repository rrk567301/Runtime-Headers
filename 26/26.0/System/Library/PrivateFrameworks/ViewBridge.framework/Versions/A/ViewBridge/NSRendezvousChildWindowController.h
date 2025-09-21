@interface NSRendezvousChildWindowController : NSSemiAutonomousRendezvousWindowController {
    unsigned char _childControllerInvalid : 1;
}

- (void)invalidateWithError:(id)a0;
- (void)invalidate;

@end
