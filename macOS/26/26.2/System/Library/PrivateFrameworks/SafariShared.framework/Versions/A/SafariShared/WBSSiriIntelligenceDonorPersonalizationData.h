@class NSString;

@interface WBSSiriIntelligenceDonorPersonalizationData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *searchQuery;
@property (nonatomic) unsigned long long position;

- (void)clearData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
