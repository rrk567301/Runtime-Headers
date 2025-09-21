@class BDSReadingHistoryStateInfo;

@interface BDSBookWidgetReadingHistoryData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) BDSReadingHistoryStateInfo *stateInfo;
@property (nonatomic) char readingGoalsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStateInfo:(id)a0 readingGoalsEnabled:(char)a1;

@end
