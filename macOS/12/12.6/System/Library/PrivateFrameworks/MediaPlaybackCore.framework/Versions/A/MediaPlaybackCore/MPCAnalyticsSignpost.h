@class MSVBlockGuard;

@interface MPCAnalyticsSignpost : NSObject

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) MSVBlockGuard *guard;

+ (void)endWithIdentifier:(unsigned long long)a0 error:(id)a1;
+ (void)beginWithIdentifier:(unsigned long long)a0;
+ (void)endWithIdentifier:(unsigned long long)a0 item:(id)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0;
- (id)begin;
- (void)end;
- (id)initWithIdentifier:(unsigned long long)a0 timeout:(double)a1;
- (void)endWithError:(id)a0;
- (void)endWithItem:(id)a0;

@end
