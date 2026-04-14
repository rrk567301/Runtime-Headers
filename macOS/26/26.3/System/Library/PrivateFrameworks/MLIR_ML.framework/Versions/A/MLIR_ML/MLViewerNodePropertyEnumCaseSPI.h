@class NSString;

@interface MLViewerNodePropertyEnumCaseSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long value;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 value:(unsigned long long)a1;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithJSONDictionary:(id)a0;

@end
