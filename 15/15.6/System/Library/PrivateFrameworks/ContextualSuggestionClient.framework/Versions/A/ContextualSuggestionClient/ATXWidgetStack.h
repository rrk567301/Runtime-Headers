@class NSString, NSArray, NSDictionary;

@interface ATXWidgetStack : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) char allowsNewWidget;
@property (readonly, nonatomic) char allowsSmartRotate;
@property (copy, nonatomic) NSString *topWidgetIdentifier;
@property (copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 widgets:(id)a1 family:(long long)a2 allowsNewWidget:(char)a3 allowsSmartRotate:(char)a4;
- (id)initWithIdentifier:(id)a0 widgets:(id)a1 topWidgetIdentifier:(id)a2 family:(long long)a3 allowsNewWidget:(char)a4 allowsSmartRotate:(char)a5;
- (char)isEqualToATXWidgetStack:(id)a0;

@end
