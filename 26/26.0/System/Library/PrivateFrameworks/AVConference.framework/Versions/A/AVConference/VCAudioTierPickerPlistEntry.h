@class NSString;

@interface VCAudioTierPickerPlistEntry : NSObject

@property (nonatomic) int payload;
@property (nonatomic) unsigned long long codecBitrate;
@property (nonatomic) unsigned long long packetsPerBundle;
@property (nonatomic) unsigned long long redNumPayloads;
@property (copy, nonatomic) NSString *featureFlag;

- (BOOL)configure:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
