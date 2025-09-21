@class NSString;

@interface _MRRequestDetailsProtobuf : PBCodable <NSCopying> {
    struct { unsigned char startDate : 1; unsigned char qos : 1; unsigned char initiatorWasInferred : 1; unsigned char userInitiated : 1; } _has;
}

@property (readonly, nonatomic) char hasInitiator;
@property (retain, nonatomic) NSString *initiator;
@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (readonly, nonatomic) char hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) char hasQos;
@property (nonatomic) unsigned int qos;
@property (nonatomic) char hasStartDate;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) char hasUserInitiated;
@property (nonatomic) char userInitiated;
@property (nonatomic) char hasInitiatorWasInferred;
@property (nonatomic) char initiatorWasInferred;
@property (readonly, nonatomic) char hasOriginatingBundleID;
@property (retain, nonatomic) NSString *originatingBundleID;

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

@end
