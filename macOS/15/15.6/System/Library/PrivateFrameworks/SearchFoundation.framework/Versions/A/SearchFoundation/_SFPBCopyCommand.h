@class NSArray, NSString, NSData, _SFPBCopyItem;

@interface _SFPBCopyCommand : PBCodable <_SFPBCopyCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBCopyItem *copyableItem;
@property (copy, nonatomic) NSArray *copyableItems;
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
- (void)addCopyableItems:(id)a0;
- (void)clearCopyableItems;
- (id)copyableItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)copyableItemsCount;

@end
