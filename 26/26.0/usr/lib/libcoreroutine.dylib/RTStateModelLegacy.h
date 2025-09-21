@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *stateModelLut;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
