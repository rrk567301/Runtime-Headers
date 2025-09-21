@class NSArray;

@interface LACMechanismTree : NSObject

@property (readonly, nonatomic) char isAnd;
@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic) NSArray *children;

+ (id)mechanismTreeFromSerializedTree:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValue:(long long)a0;
- (id)initWithChildren:(id)a0 isAndNode:(char)a1;
- (char)isSatisfiableWithValue:(long long)a0;

@end
