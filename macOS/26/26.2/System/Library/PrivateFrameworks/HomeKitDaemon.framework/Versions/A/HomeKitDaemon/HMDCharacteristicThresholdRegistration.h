@class NSString, NSNumber;

@interface HMDCharacteristicThresholdRegistration : NSObject <NSCopying>

@property (readonly, copy) NSString *clientID;
@property (readonly, copy) NSNumber *updateThreshold;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithClientID:(id)a0 updateThreshold:(id)a1;

@end
