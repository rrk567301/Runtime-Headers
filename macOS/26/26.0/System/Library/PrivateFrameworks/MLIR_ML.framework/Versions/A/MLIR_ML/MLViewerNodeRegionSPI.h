@class NSString, NSArray;

@interface MLViewerNodeRegionSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *returnType;
@property (readonly, nonatomic) NSArray *nodes;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 returnType:(id)a1 nodes:(id)a2;

@end
