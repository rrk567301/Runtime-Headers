@class NSDictionary, NSXMLElement, NSDate;

@interface AVBTAIUTCValue : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *utcDate;
@property (retain, nonatomic) NSDate *taiDate;
@property (nonatomic) unsigned long long modifiedJulianDay;
@property (nonatomic) double constant;
@property (nonatomic) double coefficient;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) NSXMLElement *xmlElement;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)dictionary;
- (void).cxx_destruct;
- (id)xmlElement;
- (id)initWithXMLNode:(id)a0;

@end
