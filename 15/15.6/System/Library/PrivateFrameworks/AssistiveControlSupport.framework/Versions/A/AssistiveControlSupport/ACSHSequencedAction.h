@class NSArray;

@interface ACSHSequencedAction : ACSHAction

@property (retain, nonatomic) NSArray *subactions;

+ (id)actionWithActions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setRepeatCount:(unsigned long long)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (char)_hasAssociatedSoundForDoubleAction:(char)a0;
- (void)_performDoubleAction:(char)a0 eventSourceData:(id)a1;
- (char)hasAssociatedSound;
- (char)hasAssociatedSoundForDoubleAction;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performWithEventSourceData:(id)a0;
- (void)setEventPerformer:(id)a0;
- (char)shouldPerformDoubleActionIfPossible;

@end
