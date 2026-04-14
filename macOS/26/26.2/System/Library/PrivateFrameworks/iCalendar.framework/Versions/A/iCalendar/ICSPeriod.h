@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSSecureCoding> {
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)duration;
- (id)initWithCoder:(id)a0;
- (id)end;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStart:(id)a0 end:(id)a1;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (void).cxx_destruct;
- (BOOL)isDurationBased;
- (id)start;
- (id)initWithStart:(id)a0;
- (id)initWithStart:(id)a0 duration:(id)a1;

@end
