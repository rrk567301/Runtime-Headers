@class _SFPBShareItem, NSArray, NSString, NSData;

@interface _SFPBShareCommand : PBCodable <_SFPBShareCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBShareItem *shareItem;
@property (copy, nonatomic) NSArray *shareItems;
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
- (void)clearShareItems;
- (unsigned long long)shareItemsCount;
- (void)addShareItems:(id)a0;
- (id)shareItemsAtIndex:(unsigned long long)a0;

@end
