@class NSNumber, NSMutableArray;

@interface IDSQRParticipantStreams : NSObject

@property (readonly) NSNumber *participantID;
@property (readonly) NSMutableArray *streamArray;
@property (readonly, nonatomic) char anyParticipant;
@property (readonly, nonatomic) char anyStream;

+ (id)streamWithParticipantID:(id)a0 streamArray:(id)a1 anyParticipant:(char)a2 anyStream:(char)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithParticipantID:(id)a0 streamArray:(id)a1 anyParticipant:(char)a2 anyStream:(char)a3;

@end
