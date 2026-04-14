@class NSString;

@interface HealthDaemonFoundation.HDUserNotificationImageDefinition : NSObject <NSCopying> {
    void /* function */ systemColorName;
    void /* function */ systemImageName;
}

@property (nonatomic, readonly) NSString *systemColorName;
@property (nonatomic, readonly) NSString *systemImageName;

- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithSystemColorName:(id)a0 systemImageName:(id)a1;

@end
