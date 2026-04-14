@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject {
    CHSChronoServicesConnection *_connection;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 connection:(id)a1;

@end
