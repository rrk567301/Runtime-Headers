@class NSArray, NSString, NSMutableArray, PBUnknownFields;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *providerNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)providerNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addProviderNames:(id)a0;
- (void)clearProviderNames;
- (id)initWithAttribution:(id)a0;
- (id)providerNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)providerNamesCount;

@end
