@class NSArray, NSURL, NSString;

@interface ABRemoteAccountCollection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *accounts;
@property (copy) NSURL *baseURL;
@property (copy) NSString *tag;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
