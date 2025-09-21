@class NSString;
@protocol WFParameterState;

@interface WFUIKitParameterEditingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *parameterClassName;
@property (readonly, nonatomic) id<WFParameterState> currentState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterClassName:(id)a0 currentState:(id)a1;

@end
