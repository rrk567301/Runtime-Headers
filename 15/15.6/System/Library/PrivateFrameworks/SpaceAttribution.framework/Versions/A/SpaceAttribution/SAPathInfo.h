@class NSString, NSURL;

@interface SAPathInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *bundleID;
@property (retain) NSURL *url;
@property char exclusive;

+ (id)pathInfoWithURL:(id)a0;
+ (id)pathInfoWithURL:(id)a0 bundleID:(id)a1;
+ (id)pathInfoWithURL:(id)a0 bundleID:(id)a1 exclusive:(char)a2;
+ (id)pathInfoWithURL:(id)a0 exclusive:(char)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 exclusive:(char)a1 bundleID:(id)a2;
- (id)initWithURL:(id)a0 exclusive:(char)a1;

@end
