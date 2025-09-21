@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_stop;
- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (id)initDarwin:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initLocal:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
