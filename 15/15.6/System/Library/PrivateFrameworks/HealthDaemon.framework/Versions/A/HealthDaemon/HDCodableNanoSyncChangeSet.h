@class NSString, HDCodableError, NSData, NSMutableArray;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncPersistentUserInfoCopying, HDNanoSyncDescription, NSCopying> {
    struct { unsigned char sessionStartDate : 1; unsigned char statusCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *changes;
@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (nonatomic) char hasSessionStartDate;
@property (nonatomic) double sessionStartDate;
@property (readonly, nonatomic) char hasSessionError;
@property (retain, nonatomic) HDCodableError *sessionError;
@property (nonatomic) char hasStatusCode;
@property (nonatomic) int statusCode;

+ (id)retreiveFromPersistentUserInfo:(id)a0;
+ (id)changeSetWithChanges:(id)a0 sessionUUID:(id)a1 startDate:(id)a2 sessionError:(id)a3 statusCode:(int)a4;
+ (Class)changesType;
+ (id)persistentUserInfoKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addChanges:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (unsigned long long)changesCount;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)addToPersistentUserInfo:(id)a0;
- (void)clearChanges;
- (id)copyForPersistentUserInfo;
- (id)decodedSessionError;
- (id)decodedSessionStartDate;
- (id)decodedSessionUUID;
- (id)nanoSyncDescription;

@end
