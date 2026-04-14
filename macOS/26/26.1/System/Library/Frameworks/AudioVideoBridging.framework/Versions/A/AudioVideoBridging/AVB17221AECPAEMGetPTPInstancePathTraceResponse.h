@class NSArray;

@interface AVB17221AECPAEMGetPTPInstancePathTraceResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short startIndex;
@property (copy, nonatomic) NSArray *pathTrace;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingPathTrace;
+ (id)keyPathsForValuesAffectingStartIndex;

- (unsigned short)startIndex;
- (void)setStartIndex:(unsigned short)a0;
- (id)init;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (id)pathTrace;
- (void)setPathTrace:(id)a0;

@end
