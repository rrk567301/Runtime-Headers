@class NSString;

@interface WDInputSource : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *sourceId;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 sourceId:(id)a1;
- (BOOL)isEqualToInputSource:(id)a0;

@end
