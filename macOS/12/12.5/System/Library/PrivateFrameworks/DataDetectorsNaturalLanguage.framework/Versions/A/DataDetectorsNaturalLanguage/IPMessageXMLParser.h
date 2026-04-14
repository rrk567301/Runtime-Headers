@interface IPMessageXMLParser : NSObject

+ (id)dateFormatter;
+ (id)xmlElementForEvent:(id)a0;
+ (id)descriptionForEventStatus:(unsigned long long)a0;
+ (id)messagesByParsingXMLURL:(id)a0;
+ (id)xmlDocumentForMessages:(id)a0 outputOptions:(unsigned long long)a1;

@end
