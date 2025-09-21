@class NSArray, NSString, NSData;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *contactIdentifiers;
@property (nonatomic) char threeDTouchEnabled;
@property (copy, nonatomic) NSString *appIconBadgeBundleIdentifier;
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
- (void)addContactIdentifiers:(id)a0;
- (void)clearContactIdentifiers;
- (id)contactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contactIdentifiersCount;
- (id)initWithFacade:(id)a0;

@end
