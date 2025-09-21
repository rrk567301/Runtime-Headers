@protocol WFParameterState;

@interface WFUIKitParameterEditingResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterState:(id)a0;

@end
