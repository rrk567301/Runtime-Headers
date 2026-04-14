@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument

@property (readonly, retain, nonatomic) BSObjCArgument *returnValue;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (void).cxx_destruct;
- (BOOL)isBlock;
- (id)_prettyTypeString;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
