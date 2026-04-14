@class NSArray;

@interface ACSHSequencedAction : ACSHAction

@property (retain, nonatomic) NSArray *subactions;

+ (id)actionWithActions:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setRepeatCount:(unsigned long long)a0;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)paramDescription;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (BOOL)shouldPerformDoubleActionIfPossible;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)setEventPerformer:(id)a0;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)a0;
- (void)_performDoubleAction:(BOOL)a0 eventSourceData:(id)a1;

@end
