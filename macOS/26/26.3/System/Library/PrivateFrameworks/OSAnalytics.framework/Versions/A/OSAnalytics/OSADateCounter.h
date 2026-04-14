@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (unsigned long long)count;
- (void)resetCount;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)increment;

@end
