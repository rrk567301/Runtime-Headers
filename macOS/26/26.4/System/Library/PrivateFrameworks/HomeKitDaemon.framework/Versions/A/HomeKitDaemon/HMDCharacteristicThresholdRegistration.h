@class NSString, NSNumber;

@interface HMDCharacteristicThresholdRegistration : NSObject <NSCopying>

@property (readonly, copy) NSString *clientID;
@property (readonly, copy) NSNumber *updateThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithClientID:(id)a0 updateThreshold:(id)a1;

@end
