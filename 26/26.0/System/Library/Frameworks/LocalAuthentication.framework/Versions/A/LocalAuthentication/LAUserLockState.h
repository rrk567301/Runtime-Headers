@class NSString;

@interface LAUserLockState : NSObject {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoreLockState:(id)a0;
- (id)initWithLockState:(id)a0;

@end
