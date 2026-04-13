@class NSArray, NSMutableArray, NSMutableSet;

@interface SCRVoiceSelectionRotorListManager : NSObject

@property (retain, nonatomic) NSMutableArray *_voiceRotorItems;
@property (nonatomic) unsigned long long _indexHighlighted;
@property (retain, nonatomic) NSMutableSet *_allUsedVoicesSet;
@property (readonly, nonatomic) NSArray *voiceRotorItems;
@property (nonatomic) unsigned long long indexHighlighted;

+ (id)defaultManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)rebuildVoiceRotorList;
- (void)saveToConfiguration;
- (void)_addVoiceWithVoiceIdentifier:(id)a0 voiceLanguage:(id)a1 hasBeenSelected:(BOOL)a2;
- (unsigned long long)_indexForVoiceIdentifier:(id)a0;
- (void)selectObjectAtIndex:(unsigned long long)a0;

@end
