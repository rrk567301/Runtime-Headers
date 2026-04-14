@class NSNumber, NSDictionary;

@interface AVAudioInterruptionNotification : NSObject

@property (readonly, nonatomic) unsigned int interruptionState;
@property (readonly, nonatomic) unsigned int sessionOwnerPID;
@property (readonly, nonatomic) unsigned int sourceSessionID;
@property (readonly, nonatomic) NSNumber *nodeSessionID;
@property (readonly, nonatomic) NSDictionary *interruptionInfo;

- (void).cxx_destruct;
- (id)initWithInternal:(id)a0;

@end
