@class NSString, NSArray, _INPBDateTime, _INPBDataString;

@interface _INPBNote : PBCodable <_INPBNote, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) char hasAccountIdentifier;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) unsigned long long contentsCount;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) char hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (readonly, nonatomic) char hasModifiedDateTime;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) char hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contentType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearContents;
- (id)contentAtIndex:(unsigned long long)a0;
- (void)addContent:(id)a0;

@end
