@class NSString;

@interface MCMLazyDescription : NSString {
    id /* block */ _block;
    NSString *_value;
}

- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithDescriber:(id /* block */)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
