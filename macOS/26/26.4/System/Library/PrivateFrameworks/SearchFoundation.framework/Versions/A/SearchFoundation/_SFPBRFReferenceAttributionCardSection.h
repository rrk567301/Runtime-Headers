@class NSArray, NSString, NSData;

@interface _SFPBRFReferenceAttributionCardSection : PBCodable <_SFPBRFReferenceAttributionCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sources;
@property (nonatomic) int attribution_type;
@property (nonatomic) int expansion_type;
@property (copy, nonatomic) NSArray *thumbnails;
@property (copy, nonatomic) NSString *text_1;
@property (copy, nonatomic) NSString *text_2;
@property (nonatomic) BOOL add_tint;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearSources;
- (unsigned long long)sourcesCount;
- (void)addThumbnails:(id)a0;
- (void)clearThumbnails;
- (id)sourcesAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailsCount;
- (void)addSources:(id)a0;
- (id)thumbnailsAtIndex:(unsigned long long)a0;

@end
