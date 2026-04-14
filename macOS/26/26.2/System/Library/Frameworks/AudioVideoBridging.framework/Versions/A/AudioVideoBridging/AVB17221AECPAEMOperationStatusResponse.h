@interface AVB17221AECPAEMOperationStatusResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short operationID;
@property (nonatomic) unsigned short percentComplete;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingOperationID;
+ (id)keyPathsForValuesAffectingPercentComplete;

- (unsigned short)operationID;
- (unsigned short)percentComplete;
- (id)init;
- (void)setOperationID:(unsigned short)a0;
- (void)setPercentComplete:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
