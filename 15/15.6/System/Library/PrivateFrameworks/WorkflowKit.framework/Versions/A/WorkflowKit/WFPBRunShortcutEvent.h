@class NSString;

@interface WFPBRunShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char numberOfDialogsPresented : 1; unsigned char completed : 1; unsigned char didPresentShareSheet : 1; unsigned char didRunRemotely : 1; unsigned char isFromAutomationSuggestion : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (readonly, nonatomic) char hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) char hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;
@property (nonatomic) char hasDidRunRemotely;
@property (nonatomic) char didRunRemotely;
@property (readonly, nonatomic) char hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) char hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (nonatomic) char hasNumberOfDialogsPresented;
@property (nonatomic) unsigned int numberOfDialogsPresented;
@property (nonatomic) char hasDidPresentShareSheet;
@property (nonatomic) char didPresentShareSheet;
@property (nonatomic) char hasIsFromAutomationSuggestion;
@property (nonatomic) char isFromAutomationSuggestion;
@property (readonly, nonatomic) char hasAutomationSuggestionsTrialIdentifier;
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (readonly, nonatomic) char hasScriptingRunBundleIdentifier;
@property (retain, nonatomic) NSString *scriptingRunBundleIdentifier;

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

@end
