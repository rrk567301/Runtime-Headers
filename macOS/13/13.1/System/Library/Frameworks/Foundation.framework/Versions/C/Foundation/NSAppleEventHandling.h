@class NSScriptCommand, NSAppleEventDescriptor;

@interface NSAppleEventHandling : NSObject {
    NSAppleEventDescriptor *_event;
    NSAppleEventDescriptor *_replyEvent;
    NSScriptCommand *_scriptCommand;
    BOOL _isSuspendedWithAE;
    char _padding[3];
}

- (void)dealloc;
- (id)initWithEvent:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 replyEvent:(struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (void)setScriptCommand:(id)a0;
- (id)event;
- (id)replyEvent;
- (id)scriptCommand;
- (void)suspend;
- (void)resumeWithScriptCommandResult:(id)a0;

@end
