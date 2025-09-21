@class MRRequestDetails, _MRGroupTopologyModificationRequestProtobuf, NSArray, NSData, NSString;

@interface MRGroupTopologyModificationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRGroupTopologyModificationRequestProtobuf *protobuf;
@property (readonly, nonatomic) MRRequestDetails *requestDetails;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) char fadeAudio;
@property (nonatomic) NSString *password;
@property (nonatomic) char shouldNotPauseIfLastDeviceRemoved;
@property (nonatomic) char suppressErrorDialog;
@property (nonatomic) char muteUntilFinished;
@property (nonatomic) char shouldModifyPredictedRoutes;
@property (nonatomic) char shouldClearPredictedRoutes;

+ (char)_initiatorShouldClearPredictedRoutesByDefault:(id)a0 forModificationType:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)copyWithOutputDeviceUIDs:(id)a0;
- (id)copyWithType:(unsigned long long)a0 outputDeviceUIDs:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (id)initWithRequestDetails:(id)a0 type:(unsigned long long)a1 outputDeviceUIDs:(id)a2;
- (id)initWithRequestDetails:(id)a0 type:(unsigned long long)a1 outputDevices:(id)a2;

@end
