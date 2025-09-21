@interface PFQOSMeter : NSObject {
    _Atomic unsigned long long _counts[4];
    _Atomic unsigned long long _total;
}

- (id)description;
- (id)init;
- (char)log:(long long)a0;
- (void)recordQOS;

@end
