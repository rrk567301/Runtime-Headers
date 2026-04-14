@class _SCRTextAreaChangeSimple;

@interface _SCRTextAreaReplacement : SCRTextAreaChange

@property (retain, nonatomic) _SCRTextAreaChangeSimple *left;
@property (retain, nonatomic) _SCRTextAreaChangeSimple *right;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)value;
- (id)marker;
- (BOOL)isTruncated;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (long long)editType;

@end
