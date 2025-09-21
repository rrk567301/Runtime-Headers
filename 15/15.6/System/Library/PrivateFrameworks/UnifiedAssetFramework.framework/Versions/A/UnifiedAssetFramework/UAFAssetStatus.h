@class NSNumber, NSString;

@interface UAFAssetStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *siriLanguage;

+ (id)mockAssetStatus;
+ (char)dictationAvailableForLanguage:(id)a0;
+ (id)stringFromUAFAssetState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
