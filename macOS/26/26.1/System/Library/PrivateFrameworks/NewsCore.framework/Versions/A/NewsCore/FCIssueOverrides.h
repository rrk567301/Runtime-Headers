@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *issueDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithTitle:(id)a0 issueDescription:(id)a1;

@end
