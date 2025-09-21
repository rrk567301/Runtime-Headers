@class NSString, NSArray;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSArray *linkedUserURIs;
@property (nonatomic, getter=isDefaultPairedDevice) char defaultPairedDevice;
@property (nonatomic) char supportsRestrictingSecondaryCalling;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
