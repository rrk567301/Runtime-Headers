@class NSDictionary, NSMutableDictionary;

@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_sessions;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *sessions;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessions:(id)a0;
- (char)isEqualToATXUIFeedbackSessionContext:(id)a0;
- (id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)a0 endDate:(id)a1;
- (void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)a0 startDate:(id)a1;
- (id)uiFeedbackSessionWithSessionIdentifier:(id)a0;

@end
