@class NSString, NSData, MXAudioMetadata, NSMutableArray;

@interface MXBeginDictation : PBCodable <NSCopying> {
    struct { unsigned char inputOrigin : 1; unsigned char keyboardReturnKey : 1; unsigned char keyboardType : 1; unsigned char censorSpeech : 1; unsigned char enablePartialResults : 1; unsigned char isAutoPunctuationEnabled : 1; unsigned char saveRequestAudio : 1; unsigned char speakerIndependentRecognition : 1; } _has;
}

@property (readonly, nonatomic) char hasAudioMetadata;
@property (retain, nonatomic) MXAudioMetadata *audioMetadata;
@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasFieldId;
@property (retain, nonatomic) NSString *fieldId;
@property (readonly, nonatomic) char hasFieldLabel;
@property (retain, nonatomic) NSString *fieldLabel;
@property (readonly, nonatomic) char hasApplicationName;
@property (retain, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) char hasApplicationVersion;
@property (retain, nonatomic) NSString *applicationVersion;
@property (nonatomic) char hasKeyboardType;
@property (nonatomic) int keyboardType;
@property (nonatomic) char hasKeyboardReturnKey;
@property (nonatomic) int keyboardReturnKey;
@property (readonly, nonatomic) char hasSelectedText;
@property (retain, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) char hasPrefixText;
@property (retain, nonatomic) NSString *prefixText;
@property (readonly, nonatomic) char hasPostfixText;
@property (retain, nonatomic) NSString *postfixText;
@property (retain, nonatomic) NSMutableArray *inlineLmeItems;
@property (retain, nonatomic) NSMutableArray *languages;
@property (readonly, nonatomic) char hasRegion;
@property (retain, nonatomic) NSString *region;
@property (readonly, nonatomic) char hasActivationToken;
@property (retain, nonatomic) NSData *activationToken;
@property (nonatomic) char hasCensorSpeech;
@property (nonatomic) char censorSpeech;
@property (nonatomic) char hasSpeakerIndependentRecognition;
@property (nonatomic) char speakerIndependentRecognition;
@property (nonatomic) char hasSaveRequestAudio;
@property (nonatomic) char saveRequestAudio;
@property (readonly, nonatomic) char hasKeyboardIdentifier;
@property (retain, nonatomic) NSString *keyboardIdentifier;
@property (nonatomic) char hasEnablePartialResults;
@property (nonatomic) char enablePartialResults;
@property (nonatomic) char hasInputOrigin;
@property (nonatomic) int inputOrigin;
@property (nonatomic) char hasIsAutoPunctuationEnabled;
@property (nonatomic) char isAutoPunctuationEnabled;

+ (Class)languagesType;
+ (Class)inlineLmeItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearLanguages;
- (unsigned long long)languagesCount;
- (int)StringAsKeyboardType:(id)a0;
- (id)keyboardTypeAsString:(int)a0;
- (void)addLanguages:(id)a0;
- (id)languagesAtIndex:(unsigned long long)a0;
- (int)StringAsInputOrigin:(id)a0;
- (int)StringAsKeyboardReturnKey:(id)a0;
- (void)addInlineLmeItems:(id)a0;
- (void)clearInlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)inlineLmeItemsCount;
- (id)inputOriginAsString:(int)a0;
- (id)keyboardReturnKeyAsString:(int)a0;

@end
