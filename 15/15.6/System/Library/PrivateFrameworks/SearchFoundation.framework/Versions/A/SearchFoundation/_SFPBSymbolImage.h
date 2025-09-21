@class NSString, NSData;

@interface _SFPBSymbolImage : PBCodable <_SFPBSymbolImage, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) char punchThroughBackground;
@property (nonatomic) int backgroundColor;
@property (nonatomic) int primaryColor;
@property (nonatomic) int secondaryColor;
@property (nonatomic) int fillStyle;
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
