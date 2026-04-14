@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXInformationHeuristicRefreshTimeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (id)initWithFireDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_stop;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_start;

@end
