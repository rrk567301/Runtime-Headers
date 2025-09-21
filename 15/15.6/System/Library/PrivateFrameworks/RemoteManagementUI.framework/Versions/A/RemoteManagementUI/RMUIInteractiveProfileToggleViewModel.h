@class NSString;

@interface RMUIInteractiveProfileToggleViewModel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *title;
@property char toggleState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearModel;

@end
