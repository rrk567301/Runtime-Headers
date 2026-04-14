@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (void)increment;
- (void)resetCount;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
