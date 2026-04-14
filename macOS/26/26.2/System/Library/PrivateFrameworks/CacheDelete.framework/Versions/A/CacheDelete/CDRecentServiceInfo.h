@class NSDictionary;

@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying> {
    struct { struct { double timestamp; unsigned long long amount; } urgencies[4]; unsigned long long non_purgeable_amount; unsigned char data[0]; } recentinfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *serviceInfo;

+ (id)CDRecentServiceInfo:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 info:(id)a4;

- (void)invalidate;
- (id)nonPurgeableAmount;
- (void)log;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)amountAtUrgency:(int)a0 checkTimestamp:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 info:(id)a4;
- (BOOL)isEmpty;
- (void)updateInfo:(id)a0;
- (BOOL)validate:(double)a0 atUrgency:(int)a1;
- (BOOL)updateAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 deductFromCurrentAmount:(BOOL)a4 info:(id)a5;

@end
