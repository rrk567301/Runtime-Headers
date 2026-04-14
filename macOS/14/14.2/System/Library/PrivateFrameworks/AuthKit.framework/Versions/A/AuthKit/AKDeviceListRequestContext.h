@class NSString, NSArray;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isForceFetch) BOOL forceFetch;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long type;
@property (nonatomic) BOOL includeUntrustedDevices;
@property (nonatomic) BOOL includeFamilyDevices;
@property (copy, nonatomic) NSArray *services;
@property (copy, nonatomic) NSArray *operatingSystems;
@property (copy, nonatomic) NSArray *serialNumbers;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
