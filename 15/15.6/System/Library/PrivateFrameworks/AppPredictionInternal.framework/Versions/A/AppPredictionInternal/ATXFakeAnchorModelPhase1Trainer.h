@class NSString;

@interface ATXFakeAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    char _phase1TrainerCalled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)phase1TrainerCalled;
- (id)trainPhase1;

@end
