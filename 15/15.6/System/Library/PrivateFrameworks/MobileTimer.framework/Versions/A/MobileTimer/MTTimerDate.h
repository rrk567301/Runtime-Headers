@class NSString, NSDate;

@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) double remainingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithDate:(id)a0 currentDateProvider:(id /* block */)a1;
- (char)isEqualToTime:(id)a0;

@end
