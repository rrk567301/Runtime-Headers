@class NSString, NSMutableArray;

@interface ICIAMLogEventRequest : PBRequest <NSCopying> {
    struct { unsigned char dSID : 1; } _has;
}

@property (readonly, nonatomic) char hasApplicationMessageIdentifier;
@property (retain, nonatomic) NSString *applicationMessageIdentifier;
@property (nonatomic) char hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSMutableArray *eventParameters;

+ (Class)eventParametersType;

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
- (void)addEventParameters:(id)a0;
- (void)clearEventParameters;
- (id)eventParametersAtIndex:(unsigned long long)a0;
- (unsigned long long)eventParametersCount;

@end
