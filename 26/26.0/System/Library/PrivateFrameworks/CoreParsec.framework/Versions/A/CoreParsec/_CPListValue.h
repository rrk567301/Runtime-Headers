@class NSArray, NSData, NSString;

@interface _CPListValue : PBCodable <_CPListValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (void)clearValues;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
