@class NSString;

@interface SiriSharedUILatencyViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *userUtterance;
@property (readonly, nonatomic) char shouldSuppress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)shouldDisplay;
- (char)_hasContent;
- (id)initWithUserUtterance:(id)a0 shouldSuppress:(char)a1;
- (char)isEqualToViewModel:(id)a0;
- (char)viewShouldUpdateFromOldModel:(id)a0;

@end
