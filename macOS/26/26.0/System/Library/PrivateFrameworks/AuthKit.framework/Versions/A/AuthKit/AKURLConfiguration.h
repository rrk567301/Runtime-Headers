@class NSURL;

@interface AKURLConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long uiType;
@property (readonly, nonatomic) BOOL isBaaEnabled;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 device:(id)a1;

@end
