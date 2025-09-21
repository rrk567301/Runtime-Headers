@class NSString;

@interface TSKCOUpdateOperation : TSKCOAbstractOperation

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) struct { unsigned short id; char firstOneWin; char hasDescendantProperties; unsigned short path[6]; } propertyType;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)toString;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 propertyId:(unsigned short)a1 noop:(char)a2;
- (id)initWithAddress:(const void *)a0 propertyType:(const struct { unsigned short x0; char x1; char x2; unsigned short x3[6]; } *)a1 noop:(char)a2;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;

@end
