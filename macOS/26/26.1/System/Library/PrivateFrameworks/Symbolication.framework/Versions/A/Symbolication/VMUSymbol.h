@class NSString, VMUSourceInfo;

@interface VMUSymbol : NSObject {
    NSString *_name;
    VMUSourceInfo *_sourceInfo;
}

- (void).cxx_destruct;
- (id)name;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 address:(unsigned long long)a1;
- (id)sourceInfoForAddress:(unsigned long long)a0;

@end
