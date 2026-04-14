@class NSUUID, NSMutableDictionary, NSMutableArray, CBCoordinatedSetInfo;

@interface CBLEAudioSessionInfo : NSObject

@property (readonly, nonatomic) CBCoordinatedSetInfo *coordinatedSetInfo;
@property (readonly, nonatomic) NSUUID *audioSessionIdentifier;
@property (readonly, nonatomic) long long sessionState;
@property (readonly, nonatomic) NSMutableArray *connectedIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *locations;

- (id)initWithSession:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 withSessionId:(id)a1 withState:(long long)a2 withCoordIds:(id)a3 withLocation:(id)a4;
- (id)retrieveConnectedLEAudioPeripheralIdentifiers;

@end
