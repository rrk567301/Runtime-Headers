@class NSString;

@interface WBSPasswordCharacterClass : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)customCharacterClassWithValue:(id)a0;
+ (id)namedCharacterClassWithType:(long long)a0;
+ (id)asciiPrintableCharacterClass;
+ (id)digitCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)specialCharacterClass;
+ (id)unicodeCharacterClass;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1;

@end
