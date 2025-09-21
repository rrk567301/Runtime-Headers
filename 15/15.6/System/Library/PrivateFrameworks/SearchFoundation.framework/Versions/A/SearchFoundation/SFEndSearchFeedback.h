@class NSString;

@interface SFEndSearchFeedback : SFFeedback

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) char isCanceled;
@property (nonatomic) unsigned long long cancelSearchEvent;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0;

@end
