@class NSString, FCCKPRecordIdentifier, FCCKPRequestedFields;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString *_clientVersionETag;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPRequestedFields *_requestedFields;
    NSString *_versionETag;
}

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
