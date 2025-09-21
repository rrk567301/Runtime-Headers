@class NSString, _SFPBImage, NSData, _SFPBPunchout;

@interface _SFPBAppLink : PBCodable <_SFPBAppLink, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _SFPBPunchout *appPunchout;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) int imageAlign;
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
