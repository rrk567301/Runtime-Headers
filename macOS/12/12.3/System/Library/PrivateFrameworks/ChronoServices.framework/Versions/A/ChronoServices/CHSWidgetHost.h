@class NSString, CHSWidgetConfiguration;
@protocol CHSChronoWidgetServiceServer;

@interface CHSWidgetHost : NSObject {
    id<CHSChronoWidgetServiceServer> _server;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 server:(id)a1;

@end
