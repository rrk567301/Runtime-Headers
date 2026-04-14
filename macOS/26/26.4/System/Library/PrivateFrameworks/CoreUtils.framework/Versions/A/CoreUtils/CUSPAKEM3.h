@class NSData, NSDictionary;

@interface CUSPAKEM3 : NSObject

@property (copy, nonatomic) NSData *confirmPData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
