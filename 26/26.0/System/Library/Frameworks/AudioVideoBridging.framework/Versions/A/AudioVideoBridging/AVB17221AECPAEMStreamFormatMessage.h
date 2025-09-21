@class AVB17221AEMStreamFormat;

@interface AVB17221AECPAEMStreamFormatMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMStreamFormat *streamFormat;

+ (id)keyPathsForValuesAffectingStreamFormat;

- (void)setStreamFormat:(id)a0;
- (id)streamFormat;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
