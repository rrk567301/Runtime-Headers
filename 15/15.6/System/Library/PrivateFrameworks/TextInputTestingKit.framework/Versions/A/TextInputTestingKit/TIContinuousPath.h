@class NSMutableArray;

@interface TIContinuousPath : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) NSMutableArray *samples;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addSample:(id)a0;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithTimeStamp:(double)a0;
- (id)toJsonDictionary;

@end
