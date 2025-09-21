@class _MRRequestDetailsProtobuf, NSMutableArray, NSString;

@interface _MRGroupTopologyModificationRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char fadeAudio : 1; unsigned char muteUntilFinished : 1; unsigned char shouldClearPredictedRoutes : 1; unsigned char shouldModifyPredictedRoutes : 1; unsigned char shouldNotPauseIfLastDeviceRemoved : 1; unsigned char suppressErrorDialog : 1; } _has;
}

@property (readonly, nonatomic) char hasDetails;
@property (retain, nonatomic) _MRRequestDetailsProtobuf *details;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *outputDeviceUIDs;
@property (nonatomic) char hasFadeAudio;
@property (nonatomic) char fadeAudio;
@property (readonly, nonatomic) char hasPassword;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) char hasSuppressErrorDialog;
@property (nonatomic) char suppressErrorDialog;
@property (nonatomic) char hasShouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) char shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) char hasMuteUntilFinished;
@property (nonatomic) char muteUntilFinished;
@property (nonatomic) char hasShouldModifyPredictedRoutes;
@property (nonatomic) char shouldModifyPredictedRoutes;
@property (nonatomic) char hasShouldClearPredictedRoutes;
@property (nonatomic) char shouldClearPredictedRoutes;

+ (Class)outputDeviceUIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addOutputDeviceUIDs:(id)a0;
- (void)clearOutputDeviceUIDs;
- (id)outputDeviceUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDeviceUIDsCount;

@end
