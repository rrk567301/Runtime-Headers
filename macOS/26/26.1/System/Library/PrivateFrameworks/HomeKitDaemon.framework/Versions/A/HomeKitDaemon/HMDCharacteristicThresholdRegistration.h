@class NSString, NSNumber;

@interface HMDCharacteristicThresholdRegistration : NSObject <NSCopying>

@property (readonly, copy) NSString *clientID;
@property (readonly, copy) NSNumber *updateThreshold;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientID:(id)a0 updateThreshold:(id)a1;

@end
