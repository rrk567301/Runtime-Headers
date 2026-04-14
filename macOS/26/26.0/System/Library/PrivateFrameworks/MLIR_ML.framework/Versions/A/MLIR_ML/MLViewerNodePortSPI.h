@class NSString, NSArray;

@interface MLViewerNodePortSPI : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned long long valueRef;
@property (nonatomic) void *opaquePtr;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithName:(id)a0 dataType:(unsigned int)a1 shape:(id)a2 valueRef:(unsigned long long)a3 opaquePtr:(void *)a4;

@end
