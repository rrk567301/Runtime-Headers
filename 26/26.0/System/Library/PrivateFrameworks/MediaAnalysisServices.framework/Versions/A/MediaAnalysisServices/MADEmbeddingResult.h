@class NSData, NSArray;

@interface MADEmbeddingResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSArray *shape;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2;
- (id)initWithVersion:(unsigned long long)a0 data:(id)a1 type:(unsigned long long)a2 shape:(id)a3;

@end
