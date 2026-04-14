@class NSString, NSMutableSet, NSData, NSMutableArray;

@interface CoreDAVItem : NSObject <CoreDAVItem>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSMutableSet *attributes;
@property (retain, nonatomic) NSMutableArray *extraChildItems;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) BOOL useCDATA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyParseRules;
+ (id)parseRuleCache;

- (BOOL)validate;
- (void)parserSuggestsBaseURL:(id)a0;
- (void)parserFoundUnrecognizedElement:(id)a0;
- (id)init;
- (id)hashString;
- (void)write:(id)a0;
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)a0;
- (void).cxx_destruct;
- (id)childrenToWrite;
- (id)payloadAsString;
- (id)initWithNameSpace:(id)a0 andName:(id)a1;
- (long long)payloadAsNSInteger;
- (void)setPayloadAsString:(id)a0;
- (id)generateXMLString;
- (void)parserFoundPayload:(id)a0;

@end
