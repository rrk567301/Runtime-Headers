@class NSArray;

@interface AVB17221AECPAEMGetASPathResponse : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorIndex;
@property (copy, nonatomic) NSArray *path;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingPath;

- (void)setPath:(id)a0;
- (id)path;
- (id)init;
- (unsigned short)descriptorIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
