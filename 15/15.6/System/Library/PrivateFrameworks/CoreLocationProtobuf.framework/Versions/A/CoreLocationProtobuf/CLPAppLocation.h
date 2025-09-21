@class NSString, CLPLocation;

@interface CLPAppLocation : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char loiType : 1; unsigned char routineMode : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) int appState;
@property (nonatomic) char hasAge;
@property (nonatomic) double age;
@property (retain, nonatomic) CLPLocation *location;
@property (nonatomic) char hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) char hasRoutineMode;
@property (nonatomic) int routineMode;
@property (nonatomic) char hasLoiType;
@property (nonatomic) int loiType;

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
