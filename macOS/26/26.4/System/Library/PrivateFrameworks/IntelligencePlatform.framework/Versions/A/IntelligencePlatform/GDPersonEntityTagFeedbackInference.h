@interface GDPersonEntityTagFeedbackInference : NSObject

@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) long long idValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIDValue:(long long)a0 tag:(long long)a1;
- (BOOL)isEqualToPersonEntityTagFeedbackInference:(id)a0;

@end
