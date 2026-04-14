@class NSString, NSBundle, NSNumber;

@interface TPSWelcomeInformation : NSObject {
    NSNumber *__isHardwareWelcome;
}

@property (readonly, nonatomic) long long platform;
@property (nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (retain, nonatomic) NSBundle *stringBundle;
@property (readonly, copy, nonatomic) NSString *collectionName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0;
- (id)initWithPlatform:(long long)a0 stringBundle:(id)a1;
- (id)osString;
- (id)majorVersionString;
- (id)messageForPlatformIOS;
- (id)messageForPlatformMacOS;
- (id)messageForPlatformWatchOS;

@end
