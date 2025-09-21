@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (void)resetCount;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)increment;

@end
