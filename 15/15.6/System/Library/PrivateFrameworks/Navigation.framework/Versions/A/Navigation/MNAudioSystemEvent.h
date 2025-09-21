@class NSString;

@interface MNAudioSystemEvent : NSObject

@property (readonly, copy, nonatomic) NSString *utterance;
@property (readonly, nonatomic) unsigned long long shortPrompt;
@property (readonly, nonatomic) unsigned long long guidanceLevel;
@property (readonly, nonatomic) char isPrivate;
@property (readonly, nonatomic) char hasSoundEffect;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)description;
- (void).cxx_destruct;
- (char)isEqualToEvent:(id)a0;
- (id)initWithUtterance:(id)a0 andShortPrompt:(unsigned long long)a1 andVoiceGuidanceLevel:(unsigned long long)a2 andCompletion:(id /* block */)a3;

@end
