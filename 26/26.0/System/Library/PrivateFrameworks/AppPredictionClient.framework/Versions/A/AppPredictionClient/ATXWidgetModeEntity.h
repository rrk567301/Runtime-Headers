@class ATXModeEntityScore, NSString, CHSWidget;

@interface ATXWidgetModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CHSWidget *widget;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWidget:(id)a0;

@end
