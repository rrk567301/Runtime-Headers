@class NSDictionary, NSData, NSString;

@interface _CPStruct : PBCodable <_CPStruct, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *stringKeyFields;
@property (copy, nonatomic) NSDictionary *intKeyFields;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;
- (char)getIntKeyFields:(id *)a0 forKey:(int)a1;
- (char)getStringKeyFields:(id *)a0 forKey:(id)a1;
- (void)setIntKeyFields:(id)a0 forKey:(int)a1;
- (void)setStringKeyFields:(id)a0 forKey:(id)a1;

@end
