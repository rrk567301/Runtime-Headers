@class NSString;

@interface WFDeferredLocalizedString : NSString

@property (copy, nonatomic) NSString *backingStore;
@property (copy, nonatomic) NSString *localizedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;

@end
