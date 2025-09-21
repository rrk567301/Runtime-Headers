@interface SCROBrailleDisplayInput : NSObject

@property (nonatomic) double quietSince;
@property (nonatomic) double busySince;
@property (nonatomic) double nextWillMemorizeNotificationTime;
@property (nonatomic) double memorizeNextKeyImmediatelyTimeout;
@property (nonatomic) char prepareToMemorizeNextKey;
@property (nonatomic) char requestPrepareToMemorizeNextKey;
@property (nonatomic) char memorizeNextKeyImmediately;
@property (nonatomic) char willMemorizeNow;
@property (nonatomic) char isQuiet;
@property (nonatomic) char newDown;
@property (nonatomic) struct __CFArray { } *currentChord;
@property (nonatomic) struct __CFSet { } *downKeys;
@property (nonatomic) unsigned int routerEvent;
@property (nonatomic) char currentBrailleChordContainsSpacebar;
@property (nonatomic) char currentBrailleChordBeganWithSpacebar;
@property (nonatomic) char currentBrailleChordContainsNonSpacebarChordableKey;
@property (nonatomic) char spacebarIsDown;
@property (nonatomic) char skipBrailleKeyboardKeyTranslation;
@property (nonatomic) double lastBrailleChordTypingTime;
@property (nonatomic) struct __CFArray { } *currentBrailleChord;
@property (nonatomic) struct __CFSet { } *downBrailleDots;
@property (nonatomic) unsigned int currentHIDCommand;
@property (nonatomic) unsigned int currentBrailleModifiers;
@property (nonatomic) unsigned int downBrailleModifiers;
@property (nonatomic) double lastBrailleChordPosted;
@property (nonatomic) double brailleCharExponentialMovingAverage;
@property (nonatomic) double brailleTranslationTimeout;

+ (id)sharedInstance;

- (void)dealloc;

@end
