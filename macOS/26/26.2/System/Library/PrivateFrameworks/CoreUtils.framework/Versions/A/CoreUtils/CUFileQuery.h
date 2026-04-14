@class NSString;

@interface CUFileQuery : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithDictionary:(id)a0;

@end
