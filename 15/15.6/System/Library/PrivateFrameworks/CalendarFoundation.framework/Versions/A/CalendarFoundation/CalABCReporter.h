@class NSString, NSArray;

@interface CalABCReporter : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *subtypeContext;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) char ignoreRateLimiting;

- (void).cxx_destruct;
- (void)report;
- (void)report:(char)a0;
- (id)initWithType:(id)a0 subtype:(id)a1 context:(id)a2;
- (char)rateLimitingAllowsABCReport;
- (void)reportSynchronous;

@end
