@class COMAPPLEPETCOMMONPETMetadata, COMAPPLEPROACTIVEGMSGMSUberEvent;

@interface COMAPPLEPROACTIVEGMSGMSPETUploadEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) COMAPPLEPETCOMMONPETMetadata *metadata;
@property (readonly, nonatomic) BOOL hasUberEvent;
@property (retain, nonatomic) COMAPPLEPROACTIVEGMSGMSUberEvent *uberEvent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
