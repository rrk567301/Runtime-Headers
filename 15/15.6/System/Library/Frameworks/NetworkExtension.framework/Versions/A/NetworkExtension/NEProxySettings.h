@class NSString, NSArray, NSURL, NEProxyServer;

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    NEProxyServer *_HTTPServer;
    NEProxyServer *_HTTPSServer;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char useForAllDomains;
@property char autoProxyDiscovery;
@property (copy) NSURL *proxyAutoConfigURL;
@property (copy) NSString *proxyAutoConfigJavaScript;
@property char FTPEnabled;
@property (copy) NEProxyServer *FTPServer;
@property char SOCKSEnabled;
@property (copy) NEProxyServer *SOCKSServer;
@property char RTSPEnabled;
@property (copy) NEProxyServer *RTSPServer;
@property char gopherEnabled;
@property (copy) NEProxyServer *gopherServer;
@property char usePassiveFTP;
@property (copy) NSArray *supplementalMatchDomains;
@property (copy) NSArray *supplementalMatchOrders;
@property (readonly) char enabled;
@property char autoProxyConfigurationEnabled;
@property (copy) NSURL *proxyAutoConfigurationURL;
@property (copy) NSString *proxyAutoConfigurationJavaScript;
@property char HTTPEnabled;
@property (copy) NEProxyServer *HTTPServer;
@property char HTTPSEnabled;
@property (copy) NEProxyServer *HTTPSServer;
@property char excludeSimpleHostnames;
@property (copy) NSArray *exceptionList;
@property (copy) NSArray *matchDomains;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychain;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;

@end
