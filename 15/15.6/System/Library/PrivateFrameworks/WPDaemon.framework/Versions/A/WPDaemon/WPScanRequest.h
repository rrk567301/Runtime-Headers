@class NSArray, NSDictionary, NSData, NSNumber;

@interface WPScanRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned char clientType;
@property struct { long long screenOnInterval; long long screenOffInterval; long long window; } scanningRates;
@property char allowDuplicates;
@property char scanWhenLocked;
@property char activeScanning;
@property char scanCache;
@property (retain) NSNumber *rssiThreshold;
@property (retain, nonatomic) NSData *blobValue;
@property (retain, nonatomic) NSData *maskValue;
@property (retain) NSDictionary *options;
@property (retain) NSArray *peers;
@property double updateTime;
@property long long nearbyScanMode;
@property long long advBuffer;
@property char priorityCritical;
@property char range;
@property char holdVoucher;
@property (retain) NSArray *useCaseList;
@property long long requestedAtNsec;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)convertUseCaseToString:(id)a0;

@end
