@class PBDataReader, NSString, NSArray, GEOFormattedStringMetaData, GEOConditionalFormattedString, NSMutableArray, PBUnknownFields;
@protocol GEOServerConditionalString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOConditionalFormattedString *_alternativeString;
    NSMutableArray *_formatArguments;
    NSMutableArray *_formatStrings;
    NSMutableArray *_formatStyles;
    GEOFormattedStringMetaData *_metaData;
    NSMutableArray *_separators;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_alternativeString : 1; unsigned char read_formatArguments : 1; unsigned char read_formatStrings : 1; unsigned char read_formatStyles : 1; unsigned char read_metaData : 1; unsigned char read_separators : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSString *stringWithDefaultValues;
@property (readonly, nonatomic) NSString *basicString;
@property (readonly, nonatomic) NSArray *formatStrings;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly, nonatomic) NSArray *separators;
@property (readonly, nonatomic) NSArray *formatStyles;
@property (readonly, nonatomic) id<GEOServerConditionalString> alternativeString;
@property (readonly, nonatomic) char isPrivate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *formatStrings;
@property (retain, nonatomic) NSMutableArray *formatArguments;
@property (retain, nonatomic) NSMutableArray *separators;
@property (retain, nonatomic) NSMutableArray *formatStyles;
@property (readonly, nonatomic) char hasAlternativeString;
@property (retain, nonatomic) GEOConditionalFormattedString *alternativeString;
@property (readonly, nonatomic) char hasMetaData;
@property (retain, nonatomic) GEOFormattedStringMetaData *metaData;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)formatStyleType;
+ (Class)formatArgumentType;
+ (Class)formatStringType;
+ (char)isValid:(id)a0;
+ (Class)separatorType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSeparators;
- (unsigned long long)separatorsCount;
- (void)addFormatStyle:(id)a0;
- (id)_joinFormattedComponentsWithSeparators:(id)a0;
- (void)addFormatArgument:(id)a0;
- (void)addFormatString:(id)a0;
- (void)addSeparator:(id)a0;
- (void)clearFormatArguments;
- (void)clearFormatStrings;
- (void)clearFormatStyles;
- (void)clearUnknownFields:(char)a0;
- (id)formatArgumentAtIndex:(unsigned long long)a0;
- (unsigned long long)formatArgumentsCount;
- (id)formatStringAtIndex:(unsigned long long)a0;
- (unsigned long long)formatStringsCount;
- (id)formatStyleAtIndex:(unsigned long long)a0;
- (unsigned long long)formatStylesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)separatorAtIndex:(unsigned long long)a0;

@end
