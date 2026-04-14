@class NSArray, NSString, NSData;

@interface _SFPBCoreSpotlightButtonItem : PBCodable <_SFPBCoreSpotlightButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actionItemTypes;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearActionItemTypes;
- (void)addActionItemTypes:(id)a0;
- (unsigned long long)actionItemTypesCount;
- (id)actionItemTypesAtIndex:(unsigned long long)a0;

@end
