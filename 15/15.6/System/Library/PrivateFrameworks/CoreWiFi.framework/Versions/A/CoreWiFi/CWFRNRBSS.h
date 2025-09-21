@class NSString, CWFChannel;

@interface CWFRNRBSS : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long shortSSID;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (nonatomic, getter=isUPRActive) char UPRActive;
@property (nonatomic, getter=isSameSSID) char sameSSID;
@property (nonatomic, getter=isMultipleBSSID) char multipleBSSID;
@property (nonatomic, getter=isTransmittedBSSID) char transmittedBSSID;
@property (nonatomic, getter=isMultiband6GHz) char multiband6GHz;
@property (nonatomic, getter=isColocatedAP) char colocatedAP;
@property (nonatomic) unsigned long long TBTTOffset;
@property (nonatomic) unsigned long long primary20MHzPSD;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (char)isEqualToRNRBSS:(id)a0;

@end
