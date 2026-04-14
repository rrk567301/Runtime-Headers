@interface AVB17221AECPAEMGetPTPInstancePathTraceCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short startIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingStartIndex;

- (void)setStartIndex:(unsigned short)a0;
- (id)init;
- (unsigned short)startIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
