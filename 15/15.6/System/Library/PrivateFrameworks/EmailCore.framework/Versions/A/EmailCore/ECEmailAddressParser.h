@interface ECEmailAddressParser : NSObject

+ (char)parseEmailAddressString:(id)a0 displayName:(id *)a1 localPart:(id *)a2 domain:(id *)a3 groupList:(id *)a4;
+ (char)validateDomain:(id)a0;
+ (char)_validateString:(id)a0 withFunction:(void /* function */ *)a1;
+ (char)parseString:(id)a0 emailAddressList:(id *)a1;
+ (char)validateDisplayName:(id)a0;
+ (char)validateLocalPart:(id)a0;

@end
