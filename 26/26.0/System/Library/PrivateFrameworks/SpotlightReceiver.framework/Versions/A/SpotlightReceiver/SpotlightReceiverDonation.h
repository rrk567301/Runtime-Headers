@class NSString, NSArray, NSNumber;

@interface SpotlightReceiverDonation : NSObject {
    NSString *_versionName;
    NSNumber *_versionValue;
    NSString *_errorAttributeName;
    NSString *_errorCodeAttributeName;
}

@property (copy, nonatomic) NSString *configName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *protectionClass;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *identifiers;
@property (nonatomic) long long donationType;
@property (copy, nonatomic) NSString *journalCookie;
@property (nonatomic) unsigned long long serialNumber;
@property (nonatomic) long long indexType;
@property (readonly, nonatomic) NSString *versionName;
@property (readonly, nonatomic) NSNumber *versionValue;
@property (readonly, nonatomic) NSString *errorAttributeName;
@property (readonly, nonatomic) NSString *errorCodeAttributeName;

- (void).cxx_destruct;
- (id)initWithVersionName:(id)a0 versionValue:(id)a1;

@end
