@class NSString, NSMutableArray;

@interface SODictationCommandGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *commandsArray;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) unsigned long long searchScore;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isCustom;
@property (readonly, nonatomic) BOOL isGroup;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isVisible;
- (void)saveToPreferences;
- (void)setLocale:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)cloneWithoutCommands;

@end
