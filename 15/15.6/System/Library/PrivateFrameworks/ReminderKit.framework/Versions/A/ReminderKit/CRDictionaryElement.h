@class CRVectorTimestamp;
@protocol CRDataType;

@interface CRDictionaryElement : NSObject

@property (retain, nonatomic) id<CRDataType> value;
@property (retain, nonatomic) CRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (void)mergeWith:(id)a0;

@end
