@class NSArray, NSString;

@interface _INPBListShortcutsIntentResponse : PBCodable <_INPBListShortcutsIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *shortcuts;
@property (readonly, nonatomic) unsigned long long shortcutsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)shortcutsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addShortcuts:(id)a0;
- (void)clearShortcuts;
- (id)shortcutsAtIndex:(unsigned long long)a0;

@end
