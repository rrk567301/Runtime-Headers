@class NSString, CWFChannel;

@interface CWFBackgroundScanNetwork : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *BSSID;
@property (nonatomic) char entry;
@property (nonatomic) char exit;
@property (copy, nonatomic) CWFChannel *channel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (char)isEqualToBackgroundScanNetwork:(id)a0;

@end
