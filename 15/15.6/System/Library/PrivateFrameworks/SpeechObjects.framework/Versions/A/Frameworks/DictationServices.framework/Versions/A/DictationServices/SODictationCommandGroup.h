@class NSString, NSMutableArray;

@interface SODictationCommandGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *commandsArray;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long searchScore;
@property (nonatomic) char isEnabled;
@property (nonatomic) char isCustom;
@property (readonly, nonatomic) char isGroup;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void)setLocale:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (char)isVisible;
- (void)saveToPreferences;
- (id)cloneWithoutCommands;

@end
