@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSHTTPURLResponse *response;
@property (retain) NSData *data;
@property (copy) NSString *requestBodyKeyPath;
@property (copy) NSString *mockID;

+ (id)objectFromPlist:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
