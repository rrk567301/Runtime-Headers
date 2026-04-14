@class NSUserDefaults;

@interface _GCDaemonSettings : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)init;
- (id)anonymizedIdentifierForControllerIdentifier:(id)a0;
- (id)newAnonymizedIdentifiersDictionary:(id)a0;

@end
