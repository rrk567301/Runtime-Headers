@interface PRSFTETask : NSObject <PRSTriggerTask>

@property (copy) id /* block */ reply;

- (void).cxx_destruct;
- (id)initWithReply:(id /* block */)a0;
- (char)allowLocation;
- (char)needsBag;
- (void)triggerQuery:(char)a0;

@end
