@interface CKException : NSException

@property (readonly, nonatomic) int errorCode;

- (id)error;
- (id)initWithCode:(int)a0 format:(id)a1;
- (id)initWithCode:(int)a0 format:(id)a1 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (id)initWithName:(id)a0 format:(id)a1;
- (id)initWithName:(id)a0 format:(id)a1 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;

@end
