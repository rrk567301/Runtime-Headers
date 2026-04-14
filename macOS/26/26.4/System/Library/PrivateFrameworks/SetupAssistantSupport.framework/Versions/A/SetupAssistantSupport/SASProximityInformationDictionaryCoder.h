@class NSMutableDictionary;

@interface SASProximityInformationDictionaryCoder : NSCoder

@property (retain) NSMutableDictionary *dataDictionary;

- (BOOL)decodeBoolForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setGrammarInflectionGender:(id)a0;
- (void)setWiFiPassword:(id)a0;
- (void)setWiFiSSID:(id)a0;

@end
