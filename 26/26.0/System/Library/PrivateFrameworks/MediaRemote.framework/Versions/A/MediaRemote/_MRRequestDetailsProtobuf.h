@class NSString;

@interface _MRRequestDetailsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char startDate : 1; unsigned char qos : 1; unsigned char initiatorWasInferred : 1; unsigned char userInitiated : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInitiator;
@property (retain, nonatomic) NSString *initiator;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) unsigned int qos;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) BOOL hasUserInitiated;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL hasInitiatorWasInferred;
@property (nonatomic) BOOL initiatorWasInferred;
@property (readonly, nonatomic) BOOL hasOriginatingBundleID;
@property (retain, nonatomic) NSString *originatingBundleID;
@property (readonly, nonatomic) BOOL hasOperationID;
@property (retain, nonatomic) NSString *operationID;
@property (readonly, nonatomic) BOOL hasSurface;
@property (retain, nonatomic) NSString *surface;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
