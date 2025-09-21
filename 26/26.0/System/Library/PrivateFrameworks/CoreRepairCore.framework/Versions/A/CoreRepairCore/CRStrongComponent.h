@class NSString;

@interface CRStrongComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *fwVersion;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponentType:(id)a0 identifier:(id)a1 fwVersion:(id)a2;

@end
