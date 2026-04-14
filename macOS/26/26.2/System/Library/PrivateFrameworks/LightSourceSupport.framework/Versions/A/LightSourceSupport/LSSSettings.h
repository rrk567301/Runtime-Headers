@class NSUserDefaults;

@interface LSSSettings : NSObject {
    NSUserDefaults *_userDefaults;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL dynamic;

- (void).cxx_destruct;

@end
