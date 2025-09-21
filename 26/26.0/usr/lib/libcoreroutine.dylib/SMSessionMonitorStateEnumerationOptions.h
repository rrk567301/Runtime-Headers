@class NSDateInterval;

@interface SMSessionMonitorStateEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) BOOL sortByStateStartDate;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSDateInterval *dateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortByStateStartDate:(BOOL)a2 ascending:(BOOL)a3 dateInterval:(id)a4;

@end
