@class PKRemotePaymentInstrument, NSString, NSArray, NSUUID, NSDate;

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSDate *lastSeen;
@property (readonly, nonatomic) char canMakePayments;
@property (nonatomic) long long proximityState;
@property (nonatomic) char isLocked;
@property (nonatomic) char userDisabled;
@property (nonatomic) char deviceDisabled;
@property (retain, nonatomic) NSArray *remotePaymentInstruments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSUUID *bluetoothUUID;
@property (nonatomic) char supportsFaceID;
@property (retain, nonatomic) NSArray *supportedSetupFeatures;
@property (nonatomic) long long majorOperatingSystemVersion;

+ (id /* block */)acceptedComparatorWithPaymentSupportedQuery:(id)a0;
+ (id /* block */)preferenceComparator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (long long)_deviceTypeForModelIdentifier:(id)a0;
- (char)isEqualToRemoteDevice:(id)a0;
- (id)pk_idsDestination;

@end
