@class NSString, _SFPBButtonItem, _SFPBImage, NSData;

@interface _SFPBSportsTeam : PBCodable <_SFPBSportsTeam, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _SFPBImage *logo;
@property (copy, nonatomic) NSString *record;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _SFPBButtonItem *button;
@property (nonatomic) char isWinner;
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
