@class NSArray, NSData, NSString;

@interface _SFPBImageMontageData : PBCodable <_SFPBImageMontageData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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
