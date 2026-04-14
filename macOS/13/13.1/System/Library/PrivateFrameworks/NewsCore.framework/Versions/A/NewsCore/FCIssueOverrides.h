@class NSString;

@interface FCIssueOverrides : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *issueDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 issueDescription:(id)a1;

@end
