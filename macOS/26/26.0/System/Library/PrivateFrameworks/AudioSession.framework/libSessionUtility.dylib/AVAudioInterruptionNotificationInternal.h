@class NSNumber, NSDictionary;

@interface AVAudioInterruptionNotificationInternal : NSObject

@property (readonly, nonatomic) unsigned int interruptionState;
@property (readonly, nonatomic) unsigned int sessionOwnerPID;
@property (readonly, nonatomic) unsigned int sourceSessionID;
@property (readonly, nonatomic) NSNumber *nodeSessionID;
@property (readonly, nonatomic) NSDictionary *interruptionInfo;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterruptionState:(unsigned int)a0 sessionOwnerPID:(unsigned int)a1 sourceSessionID:(unsigned int)a2 nodeSessionID:(id)a3 interruptionInfo:(id)a4;

@end
