@class NSString;

@interface OSADateCounter : NSObject {
    NSString *_dayKey;
    NSString *_countKey;
}

- (void)resetCount;
- (unsigned long long)count;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)increment;

@end
