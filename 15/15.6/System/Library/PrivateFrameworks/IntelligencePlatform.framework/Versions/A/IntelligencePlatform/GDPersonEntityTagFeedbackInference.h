@interface GDPersonEntityTagFeedbackInference : NSObject

@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) long long idValue;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithIDValue:(long long)a0 tag:(long long)a1;
- (char)isEqualToPersonEntityTagFeedbackInference:(id)a0;

@end
