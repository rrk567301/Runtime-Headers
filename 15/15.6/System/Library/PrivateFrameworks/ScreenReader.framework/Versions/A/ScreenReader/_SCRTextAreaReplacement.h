@class _SCRTextAreaChangeSimple;

@interface _SCRTextAreaReplacement : SCRTextAreaChange

@property (retain, nonatomic) _SCRTextAreaChangeSimple *left;
@property (retain, nonatomic) _SCRTextAreaChangeSimple *right;

- (id)description;
- (char)isEqual:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)value;
- (id)marker;
- (char)isTruncated;
- (long long)editType;
- (void)addValueToOutputRequest:(id)a0 typingEchoPreference:(long long)a1;
- (char)containedByRange:(id)a0 forUIElement:(id)a1;
- (void)updateMarker:(id)a0;

@end
