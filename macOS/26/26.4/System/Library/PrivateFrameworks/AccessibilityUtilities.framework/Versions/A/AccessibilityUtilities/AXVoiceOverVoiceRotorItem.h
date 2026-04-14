@class NSString, AXCVoiceSelection;

@interface AXVoiceOverVoiceRotorItem : NSObject {
    void /* function */ identifier;
    void /* function */ userDefinedName;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *userDefinedName;
@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic, retain) AXCVoiceSelection *selection;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 selection:(id)a1 userDefinedName:(id)a2;

@end
