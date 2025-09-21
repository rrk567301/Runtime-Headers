@class _MRRequestDetailsProtobuf, NSString, NSData, NSDate;

@interface MRRequestDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRRequestDetailsProtobuf *protobuf;
@property (readonly, nonatomic) NSString *initiator;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *originatingBundleID;
@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) NSString *requestReasonID;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL initiatorWasInferred;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (copy, nonatomic) NSString *surface;

+ (BOOL)_isCLIBundleID:(id)a0;
+ (id)_inferInitatorForBundleID:(id)a0;
+ (BOOL)_isSiriBundleID:(id)a0;

- (id)initWithData:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initChildWithParent:(id)a0 reason:(id)a1;
- (id)initWithInitiator:(id)a0 requestID:(id)a1 reason:(id)a2;
- (id)initWithInitiator:(id)a0 requestID:(id)a1 reason:(id)a2 userInitiated:(BOOL)a3;
- (id)initWithInitiator:(id)a0 requestID:(id)a1 reason:(id)a2 userInitiated:(BOOL)a3 originatingBundleID:(id)a4;
- (id)initWithName:(id)a0 requestID:(id)a1 reason:(id)a2;
- (id)initWithName:(id)a0 requestID:(id)a1 reason:(id)a2 userInitiated:(BOOL)a3;
- (id)initWithRequestID:(id)a0 surface:(id)a1 initiator:(id)a2 reason:(id)a3 userInitiated:(BOOL)a4 originatingBundleID:(id)a5;
- (id)initWithSurface:(id)a0 initiator:(id)a1 reason:(id)a2;

@end
