@class NSDateInterval;

@interface SMSessionMonitorStateEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) char sortByStateStartDate;
@property (readonly, nonatomic) char ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortByStateStartDate:(char)a2 ascending:(char)a3 dateInterval:(id)a4;

@end
