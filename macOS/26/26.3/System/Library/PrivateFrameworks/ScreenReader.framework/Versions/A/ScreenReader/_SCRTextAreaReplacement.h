@class _SCRTextAreaChangeSimple;

@interface _SCRTextAreaReplacement : SCRTextAreaChange

@property (retain, nonatomic) _SCRTextAreaChangeSimple *left;
@property (retain, nonatomic) _SCRTextAreaChangeSimple *right;

- (unsigned long long)length;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isTruncated;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)marker;
- (long long)editType;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)updateMarker:(id)a0;

@end
