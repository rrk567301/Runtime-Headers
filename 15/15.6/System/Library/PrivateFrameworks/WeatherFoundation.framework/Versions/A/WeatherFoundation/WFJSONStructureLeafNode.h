@interface WFJSONStructureLeafNode : NSObject

@property (nonatomic, getter=isRequired) char required;

+ (id)optionalLeafNode;
+ (id)requiredLeafNode;

@end
