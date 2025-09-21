@class BMStoreEvent, ATXBlendingBiomeStreamLoggerContext;

@interface ATXBlendingBiomeStreamLoggerContextWrapper : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) BMStoreEvent *event;
@property (retain, nonatomic) ATXBlendingBiomeStreamLoggerContext *loggerContext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithEvent:(id)a0 loggerContext:(id)a1;
- (char)isEqualToATXBlendingBiomeStreamLoggerContextWrapper:(id)a0;

@end
