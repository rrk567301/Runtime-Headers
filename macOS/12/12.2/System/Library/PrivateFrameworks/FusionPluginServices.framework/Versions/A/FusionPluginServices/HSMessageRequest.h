@class NSString, NSDictionary;

@interface HSMessageRequest : HSMessage <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *messageStr;
@property (readonly, nonatomic) NSDictionary *messageDict;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 request:(id)a1;

@end
