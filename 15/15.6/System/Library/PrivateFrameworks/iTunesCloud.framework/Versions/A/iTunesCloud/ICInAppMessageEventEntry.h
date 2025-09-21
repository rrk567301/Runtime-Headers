@class NSString, NSDictionary;

@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSString *eventIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageIdentifier:(id)a0 params:(id)a1;
- (id)initWithMessageIdentifier:(id)a0 params:(id)a1 eventIdentifier:(id)a2;

@end
