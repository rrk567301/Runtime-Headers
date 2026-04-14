@class NSNumber, NSDictionary;

@interface AVAudioInterruptionNotification : NSObject

@property (readonly, nonatomic) unsigned int interruptionState;
@property (readonly, nonatomic) unsigned int sessionOwnerPID;
@property (readonly, nonatomic) unsigned int sourceSessionID;
@property (readonly, nonatomic) NSNumber *nodeSessionID;
@property (readonly, nonatomic) NSDictionary *interruptionInfo;

- (id)initWithInternal:(id)a0;
- (void).cxx_destruct;

@end
