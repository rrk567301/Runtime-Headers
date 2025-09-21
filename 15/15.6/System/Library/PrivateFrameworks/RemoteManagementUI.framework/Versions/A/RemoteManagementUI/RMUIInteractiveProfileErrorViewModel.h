@class NSString, NSError;

@interface RMUIInteractiveProfileErrorViewModel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *title;
@property (retain) NSString *message;
@property (retain) NSString *okText;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 isActivating:(char)a1;

@end
