@interface KHDBTag : NSObject

@property (nonatomic) long long tag;
@property (nonatomic) int tagType;

+ (id)tag:(long long)a0 withType:(int)a1;
+ (id)fileLineInfoForTagIndex:(long long)a0;

- (id)description;
- (id)init;

@end
