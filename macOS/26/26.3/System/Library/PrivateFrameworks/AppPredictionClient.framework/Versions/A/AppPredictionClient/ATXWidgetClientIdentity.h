@class NSString;

@interface ATXWidgetClientIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientSessionIdentifier;
@property (nonatomic) unsigned long long widgetClient;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientSessionIdentifier:(id)a0 widgetClient:(unsigned long long)a1;
- (id)stringForWidgetClient;

@end
