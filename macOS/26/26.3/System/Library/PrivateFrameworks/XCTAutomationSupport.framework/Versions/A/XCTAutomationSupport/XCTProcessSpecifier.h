@class NSString;

@interface XCTProcessSpecifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *path;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 path:(id)a1;

@end
