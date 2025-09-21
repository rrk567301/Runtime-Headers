@class NSString, NSArray;

@interface CTGeofenceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSString *csgNetworkIdentifier;
@property (retain, nonatomic) NSString *networkIdentifier;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
@property (nonatomic) BOOL enableNRStandalone;
@property (nonatomic) long long NRStandaloneMode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
