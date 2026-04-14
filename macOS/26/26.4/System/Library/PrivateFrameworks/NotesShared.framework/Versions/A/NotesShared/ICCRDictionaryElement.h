@class ICCRVectorTimestamp;
@protocol ICCRDataType;

@interface ICCRDictionaryElement : NSObject

@property (retain, nonatomic) id<ICCRDataType> value;
@property (retain, nonatomic) ICCRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)a0;

- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)mergeWith:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
