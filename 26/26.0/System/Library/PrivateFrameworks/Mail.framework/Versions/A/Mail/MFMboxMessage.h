@interface MFMboxMessage : MCMessage

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } mboxRange;

- (id)dataSource;
- (id)init;
- (void)setDataSource:(id)a0;
- (id)initWithMboxRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
