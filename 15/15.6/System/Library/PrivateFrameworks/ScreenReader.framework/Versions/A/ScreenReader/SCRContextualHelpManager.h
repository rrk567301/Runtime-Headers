@class SCRCThreadKey, SCRCTargetSelectorTimer, SCRCUserDefaults, NSLock;
@protocol SCRContextualHelpHandlerProtocol;

@interface SCRContextualHelpManager : NSObject {
    long long _outputElementHelpTag;
    long long _outputCustomActionRotorHelpTag;
    long long _outputMoreContentRotorHelpTag;
    SCRCThreadKey *_threadKey;
    char _needToOutputHelpForCurrentElement;
}

@property (retain, nonatomic) SCRCTargetSelectorTimer *_outputTimer;
@property (nonatomic) char shouldOutputVOInstructions;
@property (retain, nonatomic, setter=_setShouldOutputVOInstructionsObserver:) id _shouldOutputVOInstructionsObserver;
@property (retain, nonatomic, setter=_setShouldOutputContextualHelpTagObserver:) id _shouldOutputContextualHelpTagObserver;
@property (retain, nonatomic, setter=_setShouldOutputCustomActionRotorHelpTagObserver:) id _shouldOutputCustomActionRotorHelpTagObserver;
@property (retain, nonatomic, setter=_setShouldOutputMoreContentRotorHelpTagObserver:) id _shouldOutputMoreContentRotorHelpTagObserver;
@property (retain, nonatomic) NSLock *_variableLock;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) char shouldOutputContextualHelp;
@property (readonly, nonatomic) char shouldOutputCustomActionRotorHelp;
@property (readonly, nonatomic) char shouldOutputMoreContentRotorHelp;
@property (weak, nonatomic) id<SCRContextualHelpHandlerProtocol> delegate;

+ (id)displayStringForCommand:(id)a0;
+ (id)displayStringForCommand:(id)a0 userDefaults:(id)a1;
+ (id)replaceCommandTagsInString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancelTimer;
- (void)resetTimer;
- (id)initWithUserDefaults:(id)a0;
- (void)_createTimer;
- (void)_sendContextualHelpEvent;
- (void)_updateAfterPreferenceChanges;
- (char)isHelpPending;
- (void)outputContextualHelpWithSpokenString:(id)a0 helpTagString:(id)a1 customActionRotorHelpString:(id)a2 moreContentRotorHelpString:(id)a3 forceOutput:(char)a4;
- (void)setNeedToOutputContextualHelpForCurrentElement:(char)a0;
- (void)setShouldOutputContextualHelpTagValue:(id)a0;
- (void)setShouldOutputCustomActionRotorHelpTagValue:(id)a0;
- (void)setShouldOutputMoreContentRotorHelpTagValue:(id)a0;
- (void)setShouldOutputVOInstructionsValue:(id)a0;

@end
