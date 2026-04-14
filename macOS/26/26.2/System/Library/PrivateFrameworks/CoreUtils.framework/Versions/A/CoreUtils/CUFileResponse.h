@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable>

@property (copy, nonatomic) NSArray *fileItems;
@property (nonatomic) unsigned int flags;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithDictionary:(id)a0;

@end
