@class NSDateComponents;

@interface ScreenTimeCore.Schedule : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ end;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ enabled;
@property (nonatomic, readonly) NSDateComponents *start;
@property (nonatomic, readonly) NSDateComponents *end;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)setWithEnabled:(char)a0;
- (id)initWithEnabled:(char)a0 start:(id)a1 end:(id)a2;
- (id)setWithEnd:(id)a0;
- (id)setWithStart:(id)a0;

@end
