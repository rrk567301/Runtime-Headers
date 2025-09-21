@class NSString, NSArray;

@interface MLViewerNodeSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) NSArray *regions;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *anecValidationMessage;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithType:(id)a0 inputs:(id)a1 outputs:(id)a2 properties:(id)a3 regions:(id)a4;

@end
