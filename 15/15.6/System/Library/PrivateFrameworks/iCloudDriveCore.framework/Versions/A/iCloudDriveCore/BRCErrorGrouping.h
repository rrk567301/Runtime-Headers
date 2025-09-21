@class NSError;

@interface BRCErrorGrouping : NSObject <NSCopying>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) char isPCSChained;
@property (readonly, nonatomic) char isEnhancedDrivePrivacyEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 pcsChained:(char)a1 enhancedDrivePrivacyEnabled:(char)a2;
- (char)isEqualToErrorGrouping:(id)a0;

@end
