@class NSString, NSArray;

@interface MLViewerGraphSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *nodes;

+ (id)newGraphWithMLIRByteCode:(id)a0 signature:(id)a1;
+ (id)newGraphWithMLIR:(id)a0;
+ (id)newGraphWithModule:(struct ModuleOp { struct Operation *x0; })a0;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 nodes:(id)a1;

@end
