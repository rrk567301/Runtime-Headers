@interface AVB17221AECPAEMGetPTPInstancePathTraceCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short startIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingStartIndex;

- (unsigned short)startIndex;
- (void)setStartIndex:(unsigned short)a0;
- (id)init;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
