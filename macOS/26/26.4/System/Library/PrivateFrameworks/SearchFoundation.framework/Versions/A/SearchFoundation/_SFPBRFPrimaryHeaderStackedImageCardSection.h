@class NSArray, NSString, NSData, _SFPBRFTextProperty;

@interface _SFPBRFPrimaryHeaderStackedImageCardSection : PBCodable <_SFPBRFPrimaryHeaderStackedImageCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text_1;
@property (retain, nonatomic) _SFPBRFTextProperty *text_2;
@property (copy, nonatomic) NSArray *images;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)addImages:(id)a0;
- (unsigned long long)imagesCount;
- (void)clearImages;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)imagesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;

@end
