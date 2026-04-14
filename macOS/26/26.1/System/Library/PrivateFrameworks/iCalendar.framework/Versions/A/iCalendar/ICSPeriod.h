@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSSecureCoding> {
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)end;
- (id)start;
- (id)initWithStart:(id)a0 end:(id)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDurationBased;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)duration;
- (id)initWithStart:(id)a0;
- (id)initWithStart:(id)a0 duration:(id)a1;

@end
