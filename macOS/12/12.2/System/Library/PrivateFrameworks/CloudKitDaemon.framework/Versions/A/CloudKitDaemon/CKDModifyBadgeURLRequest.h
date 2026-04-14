@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) unsigned long long badgeValue;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)initWithOperation:(id)a0 badgeValue:(unsigned long long)a1;

@end
