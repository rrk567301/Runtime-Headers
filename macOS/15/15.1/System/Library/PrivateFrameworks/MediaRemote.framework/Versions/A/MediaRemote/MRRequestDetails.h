@class _MRRequestDetailsProtobuf, NSString, NSData, NSDate;

@interface MRRequestDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRRequestDetailsProtobuf *protobuf;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) NSString *requestReasonID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithName:(id)a0 requestID:(id)a1 reason:(id)a2;
- (id)initWithName:(id)a0 requestID:(id)a1 reason:(id)a2 userInitiated:(BOOL)a3;
- (id)initWithProtobuf:(id)a0;

@end
