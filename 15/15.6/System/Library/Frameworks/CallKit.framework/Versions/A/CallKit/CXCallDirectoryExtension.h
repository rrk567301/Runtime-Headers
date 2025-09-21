@class NSString, LSPlugInKitProxy;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedContainingAppName;
@property (retain, nonatomic) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, getter=isOnlyExtensionInContainingApp) char onlyExtensionInContainingApp;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
