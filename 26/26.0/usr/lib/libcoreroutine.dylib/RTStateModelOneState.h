@class NSUUID, RTStateDepiction, NSMutableDictionary;

@interface RTStateModelOneState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueId;
@property (retain, nonatomic) RTStateDepiction *stateDepiction;
@property (retain, nonatomic) NSMutableDictionary *stateTransitions;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
