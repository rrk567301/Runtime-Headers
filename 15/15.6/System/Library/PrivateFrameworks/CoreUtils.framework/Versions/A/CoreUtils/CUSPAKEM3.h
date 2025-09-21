@class NSData, NSDictionary;

@interface CUSPAKEM3 : NSObject

@property (copy, nonatomic) NSData *confirmPData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
