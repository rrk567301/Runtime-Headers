@class NSString;

@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)namedCharacterClassWithType:(long long)a0;
+ (id)customCharacterClassWithValue:(id)a0;
+ (id)unicodeCharacterClass;
+ (id)asciiPrintableCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)digitCharacterClass;
+ (id)specialCharacterClass;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1;

@end
