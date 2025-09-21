@class NSString, MXAudioMetadata, NSMutableArray;

@interface MXBeginRequest : PBRequest <NSCopying> {
    struct { unsigned char inputOrigin : 1; unsigned char enablePartialResults : 1; unsigned char isAutoPunctuationEnabled : 1; unsigned char isPromptedConfirmation : 1; unsigned char isPromptedDictation : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) char hasInputOrigin;
@property (nonatomic) int inputOrigin;
@property (readonly, nonatomic) char hasAudioMetadata;
@property (retain, nonatomic) MXAudioMetadata *audioMetadata;
@property (nonatomic) char hasEnablePartialResults;
@property (nonatomic) char enablePartialResults;
@property (nonatomic) char hasIsPromptedDictation;
@property (nonatomic) char isPromptedDictation;
@property (nonatomic) char hasIsPromptedConfirmation;
@property (nonatomic) char isPromptedConfirmation;
@property (readonly, nonatomic) char hasForegroundAppId;
@property (retain, nonatomic) NSString *foregroundAppId;
@property (nonatomic) char hasIsAutoPunctuationEnabled;
@property (nonatomic) char isAutoPunctuationEnabled;
@property (retain, nonatomic) NSMutableArray *inlineLmeItems;

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
- (int)StringAsInputOrigin:(id)a0;
- (void)addInlineLmeItems:(id)a0;
- (void)clearInlineLmeItems;
- (id)inlineLmeItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)inlineLmeItemsCount;
- (id)inputOriginAsString:(int)a0;

@end
