@class NSString;

@interface WDInputSource : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *sourceId;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 sourceId:(id)a1;
- (BOOL)isEqualToInputSource:(id)a0;

@end
