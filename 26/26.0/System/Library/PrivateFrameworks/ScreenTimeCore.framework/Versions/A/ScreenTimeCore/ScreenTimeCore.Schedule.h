@class NSDateComponents;

@interface ScreenTimeCore.Schedule : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ end;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) NSDateComponents *start;
@property (nonatomic, readonly) NSDateComponents *end;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)setWithEnabled:(BOOL)a0;
- (id)initWithEnabled:(BOOL)a0 start:(id)a1 end:(id)a2;
- (id)setWithEnd:(id)a0;
- (id)setWithStart:(id)a0;

@end
