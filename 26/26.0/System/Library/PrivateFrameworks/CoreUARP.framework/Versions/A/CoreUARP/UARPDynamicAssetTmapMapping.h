@class NSString, NSArray, NSObject;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapMapping : NSObject <NSSecureCoding> {
    NSString *_appleModelNumber;
    NSArray *_tmapEvents;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tag;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addSysdiagnoseMetrics:(id)a0 coreAnalyticsEvent:(id)a1 serialNumber:(id)a2;
- (BOOL)appendTmapEvents:(id)a0 endian:(id)a1;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1 serialNumber:(id)a2;
- (id)findTmapEvent:(unsigned long long)a0;
- (id)initWithEvents:(id)a0 appleModelNumber:(id)a1 endian:(id)a2;
- (BOOL)isEqualAppleModel:(id)a0;

@end
