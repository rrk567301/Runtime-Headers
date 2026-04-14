@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (void)resetCount;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)increment;
- (unsigned long long)count;

@end
