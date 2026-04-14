@interface SODictationHotKey : NSObject

@property (nonatomic) BOOL isDoubleTap;
@property (nonatomic) unsigned long long keyChar;
@property (nonatomic) unsigned long long virtualKey;
@property (nonatomic) unsigned long long modifiers;

- (id)dictionaryRepresentation;
- (id)description;
- (id)displayString;
- (id)initWithDictionary:(id)a0;
- (id)nonlocalizedDescriptionString;

@end
