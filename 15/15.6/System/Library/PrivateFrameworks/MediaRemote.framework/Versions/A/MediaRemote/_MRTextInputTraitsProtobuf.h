@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _pINEntrySeparatorIndexes;
    struct { unsigned char validTextRangeLength : 1; unsigned char validTextRangeLocation : 1; unsigned char autocapitalizationType : 1; unsigned char keyboardType : 1; unsigned char returnKeyType : 1; unsigned char autocorrection : 1; unsigned char enablesReturnKeyAutomatically : 1; unsigned char secureTextEntry : 1; unsigned char spellchecking : 1; } _has;
}

@property (nonatomic) char hasAutocapitalizationType;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) char hasKeyboardType;
@property (nonatomic) int keyboardType;
@property (nonatomic) char hasReturnKeyType;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char hasAutocorrection;
@property (nonatomic) char autocorrection;
@property (nonatomic) char hasSpellchecking;
@property (nonatomic) char spellchecking;
@property (nonatomic) char hasEnablesReturnKeyAutomatically;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char hasSecureTextEntry;
@property (nonatomic) char secureTextEntry;
@property (nonatomic) char hasValidTextRangeLocation;
@property (nonatomic) unsigned long long validTextRangeLocation;
@property (nonatomic) char hasValidTextRangeLength;
@property (nonatomic) unsigned long long validTextRangeLength;
@property (readonly, nonatomic) unsigned long long pINEntrySeparatorIndexesCount;
@property (readonly, nonatomic) unsigned long long *pINEntrySeparatorIndexes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAutocapitalizationType:(id)a0;
- (id)autocapitalizationTypeAsString:(int)a0;
- (int)StringAsKeyboardType:(id)a0;
- (int)StringAsReturnKeyType:(id)a0;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)a0;
- (void)clearPINEntrySeparatorIndexes;
- (id)keyboardTypeAsString:(int)a0;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)a0;
- (id)returnKeyTypeAsString:(int)a0;
- (void)setPINEntrySeparatorIndexes:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
