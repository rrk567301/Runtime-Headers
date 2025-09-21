@class NSDictionary;

@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying> {
    struct { struct { double timestamp; unsigned long long amount; } urgencies[4]; unsigned long long non_purgeable_amount; unsigned char data[0]; } recentinfo;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *serviceInfo;

+ (id)CDRecentServiceInfo:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 info:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)log;
- (id)serialize;
- (id)amountAtUrgency:(int)a0 checkTimestamp:(BOOL)a1;
- (id)initWithAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 info:(id)a4;
- (id)nonPurgeableAmount;
- (char)updateAmount:(id)a0 atUrgency:(int)a1 withTimestamp:(double)a2 nonPurgeableAmount:(id)a3 deductFromCurrentAmount:(char)a4 info:(id)a5;
- (void)updateInfo:(id)a0;
- (char)validate:(double)a0 atUrgency:(int)a1;

@end
