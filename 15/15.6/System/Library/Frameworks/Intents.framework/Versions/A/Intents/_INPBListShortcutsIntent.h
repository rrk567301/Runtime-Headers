@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char originDevice : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *appTitles;
@property (readonly, nonatomic) unsigned long long appTitlesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int originDevice;
@property (nonatomic) char hasOriginDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)appTitleType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOriginDevice:(id)a0;
- (void)addAppTitle:(id)a0;
- (id)appTitleAtIndex:(unsigned long long)a0;
- (void)clearAppTitles;
- (id)originDeviceAsString:(int)a0;

@end
