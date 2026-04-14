@class NSString, MTPBDismissAction, MTPBSnoozeAction;

@interface MTPBSyncMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSnoozeAction;
@property (retain, nonatomic) MTPBSnoozeAction *snoozeAction;
@property (readonly, nonatomic) BOOL hasDismissAction;
@property (retain, nonatomic) MTPBDismissAction *dismissAction;
@property (nonatomic) double syncDate;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) double syncVersion;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
