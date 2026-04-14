@class NSString;

@interface XCTProcessSpecifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *path;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 path:(id)a1;

@end
