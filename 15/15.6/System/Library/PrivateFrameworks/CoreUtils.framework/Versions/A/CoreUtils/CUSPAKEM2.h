@class NSData, NSDictionary;

@interface CUSPAKEM2 : NSObject

@property (copy, nonatomic) NSData *confirmVData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSData *shareVData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
