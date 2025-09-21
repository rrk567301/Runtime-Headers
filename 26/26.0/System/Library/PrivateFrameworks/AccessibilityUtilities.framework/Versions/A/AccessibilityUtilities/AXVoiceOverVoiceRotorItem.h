@class NSString, AXCVoiceSelection;

@interface AXVoiceOverVoiceRotorItem : NSObject {
    void /* function */ identifier;
    void /* function */ userDefinedName;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *userDefinedName;
@property (nonatomic, copy) NSString *voiceId;
@property (nonatomic, retain) AXCVoiceSelection *selection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selection:(id)a1 userDefinedName:(id)a2;

@end
