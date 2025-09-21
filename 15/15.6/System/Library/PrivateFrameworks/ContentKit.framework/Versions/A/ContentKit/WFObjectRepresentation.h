@class NSString, WFObjectType;

@interface WFObjectRepresentation : WFRepresentation

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *specifiedName;
@property (readonly, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFObjectType *wfType;

+ (char)supportsSecureCoding;
+ (id)object:(id)a0;
+ (id)object:(id)a0 named:(id)a1;
+ (id)objects:(id)a0;
+ (id)objects:(id)a0 named:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEncodable;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)initWithObject:(id)a0 named:(id)a1;

@end
