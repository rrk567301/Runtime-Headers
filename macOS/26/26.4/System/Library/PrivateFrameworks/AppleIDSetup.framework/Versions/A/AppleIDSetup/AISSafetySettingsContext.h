@class NSString;

@interface AISSafetySettingsContext : NSObject {
    void /* unknown type, empty encoding */ flowType;
    void /* unknown type, empty encoding */ userAgeRange;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithFlowType:(long long)a0;
- (id)initWithFlowType:(long long)a0 userAgeRange:(unsigned long long)a1;

@end
