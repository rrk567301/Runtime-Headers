@interface PopoverObjCAdapter : NSObject {
    void *_popover;
}

- (void)_hidePopover;
- (id)initWithPopover:(void *)a0;
- (void)disconnectPopover:(void *)a0;
- (void)registerForPopoverHidingNotifications;
- (void)unregisterForPopoverHidingNotifications;

@end
