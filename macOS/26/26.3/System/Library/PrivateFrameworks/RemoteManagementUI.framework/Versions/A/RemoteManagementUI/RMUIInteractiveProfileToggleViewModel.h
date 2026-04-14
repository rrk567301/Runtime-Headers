@class NSString;

@interface RMUIInteractiveProfileToggleViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *title;
@property BOOL toggleState;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)clearModel;

@end
