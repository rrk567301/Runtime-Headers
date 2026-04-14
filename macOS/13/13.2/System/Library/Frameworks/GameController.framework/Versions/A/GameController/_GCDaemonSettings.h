@class NSUserDefaults;

@interface _GCDaemonSettings : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (id)newAnonymizedIdentifiersDictionary:(id)a0;
- (id)anonymizedIdentifierForControllerIdentifier:(id)a0;

@end
