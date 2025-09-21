@class NSString;

@interface CNCDContactsInRangePredicate : CNPredicate <CNCDContactPredicate>

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
