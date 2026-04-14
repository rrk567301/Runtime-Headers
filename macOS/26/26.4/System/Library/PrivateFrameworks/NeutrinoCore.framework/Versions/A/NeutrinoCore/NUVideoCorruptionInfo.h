@class NSArray, NSString;

@interface NUVideoCorruptionInfo : NSObject <NSCopying>

@property unsigned long long type;
@property (copy, nonatomic) NSArray *corruptedRanges;
@property (copy, nonatomic) NSString *trackMediaCharateristic;

- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 corruptedRanges:(id)a1;

@end
