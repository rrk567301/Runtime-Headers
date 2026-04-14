@class NSUUID;
@protocol WFParameterState;

@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)a0 parameterState:(id)a1;

@end
