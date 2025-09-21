@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (void)_stop;
- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithFireDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
