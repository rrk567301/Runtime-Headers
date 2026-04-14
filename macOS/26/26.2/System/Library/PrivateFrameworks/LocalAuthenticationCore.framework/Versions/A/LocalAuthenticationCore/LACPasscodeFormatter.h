@class NSNumberFormatter;

@interface LACPasscodeFormatter : NSObject {
    NSNumberFormatter *_formatter;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)localizePasscode:(id)a0 type:(long long)a1;

@end
