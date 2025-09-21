@class NSString, MTPBDismissAction, MTPBSnoozeAction;

@interface MTPBSyncMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSnoozeAction;
@property (retain, nonatomic) MTPBSnoozeAction *snoozeAction;
@property (readonly, nonatomic) char hasDismissAction;
@property (retain, nonatomic) MTPBDismissAction *dismissAction;
@property (nonatomic) double syncDate;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) double syncVersion;

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
