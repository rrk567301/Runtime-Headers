@class NSString;

@interface SiriSharedUILatencyViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *userUtterance;
@property (readonly, nonatomic) BOOL shouldSuppress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)shouldDisplay;
- (BOOL)_hasContent;
- (BOOL)isEqualToViewModel:(id)a0;
- (BOOL)viewShouldUpdateFromOldModel:(id)a0;
- (id)initWithUserUtterance:(id)a0 shouldSuppress:(BOOL)a1;

@end
