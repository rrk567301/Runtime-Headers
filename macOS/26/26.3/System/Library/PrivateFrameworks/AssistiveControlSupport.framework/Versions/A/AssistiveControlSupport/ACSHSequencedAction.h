@class NSArray;

@interface ACSHSequencedAction : ACSHAction

@property (retain, nonatomic) NSArray *subactions;

+ (id)actionWithActions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setRepeatCount:(unsigned long long)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)a0;
- (void)_performDoubleAction:(BOOL)a0 eventSourceData:(id)a1;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performWithEventSourceData:(id)a0;
- (void)setEventPerformer:(id)a0;
- (BOOL)shouldPerformDoubleActionIfPossible;

@end
