@interface AVB17221AECPAEMGetPTPInstancePathTraceCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short startIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingStartIndex;

- (unsigned short)startIndex;
- (id)init;
- (void)setStartIndex:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
