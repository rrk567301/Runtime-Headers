@class NSString, _SFPBImage, _SFPBActionItem, NSData;

@interface _SFPBMediaOffer : PBCodable <_SFPBMediaOffer, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBActionItem *actionItem;
@property (copy, nonatomic) NSString *sublabel;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic) char isEnabled;
@property (retain, nonatomic) _SFPBImage *image;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
