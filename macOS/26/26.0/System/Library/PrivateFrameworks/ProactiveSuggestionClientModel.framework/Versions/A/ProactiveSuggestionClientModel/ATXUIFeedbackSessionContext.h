@class NSDictionary, NSMutableDictionary;

@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_sessions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *sessions;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)uiFeedbackSessionWithSessionIdentifier:(id)a0;
- (void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)a0 startDate:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithSessions:(id)a0;
- (BOOL)isEqualToATXUIFeedbackSessionContext:(id)a0;
- (id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)a0 endDate:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
