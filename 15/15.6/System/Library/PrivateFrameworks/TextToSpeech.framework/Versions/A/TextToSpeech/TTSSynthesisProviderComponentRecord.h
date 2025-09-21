@class NSString, NSArray, NSNumber;

@interface TTSSynthesisProviderComponentRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct AudioComponentDescription { unsigned int componentType; unsigned int componentSubType; unsigned int componentManufacturer; unsigned int componentFlags; unsigned int componentFlagsMask; } componentDescription;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *containerBundleIdentifier;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) char isFirstParty;
@property (retain, nonatomic) NSArray *voices;
@property (retain, nonatomic) NSNumber *parameterCount;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
