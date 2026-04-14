@class NSSound, NSMutableDictionary;
@protocol SORecognitionFeedbackManagerDelegate;

@interface SORecognitionFeedbackManager : NSObject {
    NSMutableDictionary *_accumulatedCommandDisplayInfoForAllRecognizers;
    NSSound *_defaultRecognitionSoundCache;
}

@property (readonly) BOOL externalClientRequiresFeedback;
@property (readonly) BOOL internalClientRequiresFeedback;
@property (retain) id<SORecognitionFeedbackManagerDelegate> delegate;

+ (id)sharedSORecognitionFeedbackManager;

- (BOOL)showRecognitionWindowAsSystemWide;
- (void)setRecognizedText:(id)a0 messageType:(long long)a1;
- (id)_defaultRecognitionSound;
- (void)setDisplayedCommands:(id)a0;
- (void)handleMissingLanguageDataForLocaleIdentifier:(id)a0 client:(int)a1;

@end
