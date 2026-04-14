@interface CKDModifyBadgeURLRequest : CKDURLRequest

@property (readonly, nonatomic) unsigned long long badgeValue;

- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 badgeValue:(unsigned long long)a1;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
