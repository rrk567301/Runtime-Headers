@class NSString, NSMutableString, NSMutableArray, NSLock;

@interface SCROBrailleUIDynamicBrailleView : SCROBrailleUIView <SCROBrailleUILiveCaptionsClient>

@property (retain, nonatomic) NSString *initialText;
@property (retain, nonatomic) NSMutableString *finalizedText;
@property (retain, nonatomic) NSString *updatingText;
@property (retain, nonatomic) NSString *updatingBraille;
@property (retain, nonatomic) NSMutableString *finalizedUnreadText;
@property (retain, nonatomic) NSMutableArray *finalizedTextLines;
@property (retain, nonatomic) NSMutableArray *finalizedBrailleLines;
@property (retain, nonatomic) NSLock *finalizedLinesLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEvent:(id)a0;
- (id)value;
- (void)display;
- (void).cxx_destruct;
- (id)textValue;
- (id)initWithIdentifier:(id)a0 initialText:(id)a1;
- (void)resetUnreadText;
- (id)unreadTextValue;
- (id)_brailleForText:(id)a0;
- (void)finalizeTranscription;
- (void)handleTranscribedText:(id)a0 isFinal:(BOOL)a1;
- (id)visualRepresentation;

@end
