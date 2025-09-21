@class NSData, NSDictionary;

@interface CUSPAKEM2 : NSObject

@property (copy, nonatomic) NSData *confirmVData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSData *shareVData;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
