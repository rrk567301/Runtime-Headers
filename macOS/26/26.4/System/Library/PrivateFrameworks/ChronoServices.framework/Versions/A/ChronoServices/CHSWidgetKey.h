@class NSString, CHSWidgetMetrics, CHSWidget;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) NSString *hostIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidget:(id)a0 metrics:(id)a1;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0 metrics:(id)a1 hostIdentifier:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
