@class NSMutableString;

@interface _CDStatsPrinter : NSObject {
    NSMutableString *_s;
    unsigned long long _indent;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
