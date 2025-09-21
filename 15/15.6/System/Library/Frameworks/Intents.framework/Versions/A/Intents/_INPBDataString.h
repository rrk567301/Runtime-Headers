@class NSArray, NSString;

@interface _INPBDataString : PBCodable <_INPBDataString, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternatives;
@property (readonly, nonatomic) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *localizedValue;
@property (readonly, nonatomic) char hasLocalizedValue;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (readonly, nonatomic) char hasPronunciationHint;
@property (copy, nonatomic) NSString *vocabularyIdentifier;
@property (readonly, nonatomic) char hasVocabularyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alternativesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAlternatives:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (void)clearAlternatives;

@end
