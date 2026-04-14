@class NSString, NSNumber;

@interface HMDCharacteristicThresholdRegistration : NSObject <NSCopying>

@property (readonly, copy) NSString *clientID;
@property (readonly, copy) NSNumber *updateThreshold;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithClientID:(id)a0 updateThreshold:(id)a1;

@end
