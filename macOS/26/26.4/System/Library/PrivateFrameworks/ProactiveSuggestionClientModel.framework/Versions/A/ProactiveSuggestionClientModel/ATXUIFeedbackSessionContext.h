@class NSDictionary, NSMutableDictionary;

@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_sessions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *sessions;

- (void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)a0 startDate:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXUIFeedbackSessionContext:(id)a0;
- (id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSessions:(id)a0;
- (id)init;
- (id)uiFeedbackSessionWithSessionIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;

@end
