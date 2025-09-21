@class NSDictionary;

@interface VUIExtensionContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;
@property (readonly, nonatomic) NSDictionary *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
