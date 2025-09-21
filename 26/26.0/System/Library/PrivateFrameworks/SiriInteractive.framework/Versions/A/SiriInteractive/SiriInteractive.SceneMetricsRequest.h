@class NSString, _TtC15SiriInteractive23SceneItemMetricsRequest;

@interface SiriInteractive.SceneMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    void /* unknown type, empty encoding */ _lockScreenMetrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) _TtC15SiriInteractive23SceneItemMetricsRequest *lockScreenMetrics;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLockScreenMetrics:(id)a0;

@end
