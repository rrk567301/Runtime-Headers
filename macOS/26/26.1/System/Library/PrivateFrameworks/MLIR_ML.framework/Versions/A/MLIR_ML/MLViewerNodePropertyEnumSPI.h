@class NSString, NSArray;

@interface MLViewerNodePropertyEnumSPI : NSObject <NSSecureCoding, MLViewerNodePropertySPI>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *enumType;
@property (readonly, nonatomic) NSArray *enumCases;
@property (readonly, nonatomic) unsigned long long enumValue;

+ (id)type;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 type:(id)a1 cases:(id)a2 value:(unsigned long long)a3;

@end
