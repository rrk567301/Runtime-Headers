@class NSString;

@interface ATXWidgetClientIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *clientSessionIdentifier;
@property (nonatomic) unsigned long long widgetClient;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientSessionIdentifier:(id)a0 widgetClient:(unsigned long long)a1;

@end
