@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (unsigned long long)sectionsCount;
- (id)initWithFacade:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)clearSections;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addSections:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
