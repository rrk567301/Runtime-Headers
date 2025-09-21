@class _SCRTextAreaChangeSimple;

@interface _SCRTextAreaReplacement : SCRTextAreaChange

@property (retain, nonatomic) _SCRTextAreaChangeSimple *left;
@property (retain, nonatomic) _SCRTextAreaChangeSimple *right;

- (id)value;
- (BOOL)isTruncated;
- (id)description;
- (unsigned long long)length;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)marker;
- (long long)editType;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (BOOL)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)updateMarker:(id)a0;

@end
