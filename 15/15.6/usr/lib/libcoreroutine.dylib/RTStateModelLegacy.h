@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *stateModelLut;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
