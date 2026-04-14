@class NSNumber, NSString;

@interface MTRDataTypeSemanticTagStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mfgCode;
@property (copy, nonatomic) NSNumber *namespaceID;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSString *label;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
