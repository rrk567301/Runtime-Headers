@class NSString, NSArray;

@interface MLViewerNodeRegionSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *returnType;
@property (readonly, nonatomic) NSArray *nodes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 returnType:(id)a1 nodes:(id)a2;

@end
