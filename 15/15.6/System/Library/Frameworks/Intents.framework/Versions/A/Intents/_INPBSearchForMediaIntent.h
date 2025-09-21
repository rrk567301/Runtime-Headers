@class NSArray, NSString, _INPBMediaSearch, _INPBIntentMetadata, _INPBPrivateSearchForMediaIntentData;

@interface _INPBSearchForMediaIntent : PBCodable <_INPBSearchForMediaIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) char hasMediaSearch;
@property (retain, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;
@property (readonly, nonatomic) char hasPrivateSearchForMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mediaItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearMediaItems;
- (void)addMediaItems:(id)a0;
- (id)mediaItemsAtIndex:(unsigned long long)a0;

@end
