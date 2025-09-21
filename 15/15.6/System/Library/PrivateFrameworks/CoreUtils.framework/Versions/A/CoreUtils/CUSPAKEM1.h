@class NSDictionary, NSData;

@interface CUSPAKEM1 : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSData *sharePData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
