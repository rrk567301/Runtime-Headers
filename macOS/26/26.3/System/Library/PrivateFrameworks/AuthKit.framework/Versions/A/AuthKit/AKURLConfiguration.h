@class NSURL;

@interface AKURLConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned long long uiType;
@property (readonly, nonatomic) BOOL isBaaEnabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 device:(id)a1;

@end
