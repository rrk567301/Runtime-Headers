@class NSString, NSDictionary;

@interface IEInputGroup : NSObject

@property (retain, nonatomic) NSString *inputGroupId;
@property (nonatomic) char listenAfterSpeaking;
@property (nonatomic) char canUseServerTTS;
@property (retain, nonatomic) NSString *dialogPhase;
@property (retain, nonatomic) NSDictionary *nlParameters;
@property (nonatomic) char immersiveExperience;
@property (nonatomic) char shouldCoordinateWithSpeech;

- (void).cxx_destruct;
- (id)initWithId:(id)a0;

@end
