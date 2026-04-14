@class BDSReadingHistoryStateInfo;

@interface BDSBookWidgetReadingHistoryData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BDSReadingHistoryStateInfo *stateInfo;
@property (nonatomic) BOOL readingGoalsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStateInfo:(id)a0 readingGoalsEnabled:(BOOL)a1;

@end
