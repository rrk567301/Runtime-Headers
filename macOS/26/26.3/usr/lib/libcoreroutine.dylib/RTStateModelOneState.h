@class NSUUID, RTStateDepiction, NSMutableDictionary;

@interface RTStateModelOneState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueId;
@property (retain, nonatomic) RTStateDepiction *stateDepiction;
@property (retain, nonatomic) NSMutableDictionary *stateTransitions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
