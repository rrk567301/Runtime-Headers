@class COMAPPLEPETCOMMONPETMetadata, COMAPPLEPROACTIVEGMSGMSUberEvent;

@interface COMAPPLEPROACTIVEGMSGMSPETUploadEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) COMAPPLEPETCOMMONPETMetadata *metadata;
@property (readonly, nonatomic) BOOL hasUberEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSUberEvent *uberEvent;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
